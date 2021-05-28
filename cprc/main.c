#include <stdio.h>

int main() {

   int l=0;
   int b=0;
   int t=0;
   int c;
   while((c=getchar())!=EOF){
       switch(c){
           case '\t':
               ++t;
               break;
           case ' ':
               ++b;
               break;
           case '\n':
               ++l;
               break;
       }
   }
   printf("Lines: %d, blanks: %d, tabs: %d \n", l, b, t);
    return 0;
}

