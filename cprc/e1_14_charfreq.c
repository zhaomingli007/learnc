#include <stdio.h>

#define NUM_CHARS  128
/*print histogram char frequency*/
int main(){
    int nuniquechar[NUM_CHARS];
    int i, j, c;
    int maxfreq = 0;
    for (i = 0; i < NUM_CHARS; i++){
        nuniquechar[i] = 0;
    }
        
    while((c=getchar()) != EOF){
        nuniquechar[c]++;
        if (nuniquechar[c] > maxfreq)
        {
            maxfreq = nuniquechar[c];
        }
    }
    for (i = 0; i < NUM_CHARS; i++){
        if (nuniquechar[i] != 0){
            if(i == '\n'){
                printf("\\n: ");
            }
            else if (i == '\t')
            {
                printf("\\t: ");
            }
            else
            {
                printf("%c: ", i);
            }

            for (j = 0; j < nuniquechar[i]; j++)
            {
                printf("[]");
            }
            printf("\n");
        }
    }

    printf("print vertically: \n");
    for (i = 0; i < maxfreq; i++){
        for (j = 0; j < NUM_CHARS; j++)
        {
            if (nuniquechar[j] != 0)
            {
                if (nuniquechar[j] >= maxfreq - i)
                {
                    printf("[] ");
                }
                else
                {
                    printf("   ");
                }
            }
        }
        printf("\n");
    }
    for (j = 0; j < NUM_CHARS; j++){
        if (nuniquechar[j] != 0){
            if (j == '\n')
            {
                printf("\\n ");
            }
            else if (j == '\t')
            {
                printf("\\t ");
            }
            else
            {
                printf(" %c ", j);
            }
        }
           
    }
    printf("\n");
}


