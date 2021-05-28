#include <stdio.h>
#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/
/*print one word per line */
int main() {
    int state = OUT;
    int c;
    int p;
    while((c=getchar()) != EOF) {
        if(c!=' ' && c!='\t' && c!='\n')
            putchar(c);
        if(c==' ' || c=='\t' || c=='\n'){
            state = OUT;
        }
        if(state == OUT) {
            state = IN;
            if(c!=p){
                putchar('\n');
            }
        }
        p = c;
    }

    return 0;
}