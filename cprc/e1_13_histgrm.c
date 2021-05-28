#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_LWORD 10
/*print histogram of the lengths of words*/
int main(){

    int wordlenths[MAX_LWORD];
    int i, c, l;
    int s = OUT ;
    int maxfreq=0;

    for (i = 0; i < MAX_LWORD; i++)
        wordlenths[i] = 0;

    l = 0;
    while((c=getchar()) != EOF){
        if(c==' '|| c=='\t' || c=='\n'){
            if(s == IN) {
                s = OUT;
                wordlenths[l - 1]++;
                if (wordlenths[l - 1] > maxfreq)
                    maxfreq = wordlenths[l - 1];
                l = 0;
            }
        }else {
            s = IN;
            l++;
        }
    }
    int j;
    for (i = 0; i < MAX_LWORD; i++){
        for (j = 0; j < wordlenths[i]; j++)
            printf("[]");
        printf("\n");
    }


    printf("Max freq value:%d\n", maxfreq);
    for (i = 0; i < maxfreq; i++){
        for (j = 0; j < MAX_LWORD; j++) {
            if (wordlenths[j] >= maxfreq - i){
                printf("[]");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}