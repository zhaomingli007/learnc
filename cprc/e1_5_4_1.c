#include <stdio.h>
#define IN  1 /*inside a word*/
#define OUT  0 /*outside a word*/

int main(){
    int wc = 0, lc = 0, cc = 0, state = OUT;
    int c;
    while((c=getchar()) != EOF) {
        ++cc;
        if(c == '\n')
            ++lc;
        if(c==' ' || c == '\t' || c == '\n')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++wc;
        }
    }

    printf("Chars: %d, words: %d, lines: %d", cc, wc, lc);

}