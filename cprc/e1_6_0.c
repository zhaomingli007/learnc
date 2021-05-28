#include <stdio.h>
/*count digits,white spaces and others*/
int main(){
    int i, c, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for(i = 0; i < 10; i++)
        ndigit[i] = 0;
    while((c=getchar()) != EOF){
        putchar(c);
        if(c>='0' && c<='9')
            ndigit[c-'0']++;
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }

    printf("output digits: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ndigit[i]);
    }
    printf(", white spaces: %d", nwhite);
    printf(", others: %d\n", nother);
    return 0;
}