#include <stdio.h>
#define LIMIT_LEN 1000
int getaline(char line[], int lenghtlimit);

int main()
{
    int c, len;
    char line[LIMIT_LEN];

    while((len = getaline(line, LIMIT_LEN) ) > 0 ){
        if(line[0]!='\n')
            printf("%s", line);
    }

    return 0;
}

int getaline(char line[], int lenghtlimit)
{
    int c;
    int i = 0;
    int lastnonempty = 0;
    while ((c = getchar()) != EOF && c != '\n' && i < lenghtlimit)
    {
        line[i] = c;
        if (i != 0 || (c != ' ' && c != '\t'))
            i++;
        if(c!=' ' && c!='\t')
            lastnonempty=i;
    }
    if (c == '\n')
    {
        line[lastnonempty] = c;
        lastnonempty++;
    }
    line[lastnonempty] = '\0';
    return lastnonempty;
}