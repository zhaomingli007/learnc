#include <stdio.h>
#define MAX_LEN_LIMIT 1000
int getaline(char line[], int lenghtlimit);
void copy(char to[], char from[]);

/*store the line of the max length in a file*/
int main(){

    int len; /*current line length*/
    int max; /*max line length*/
    char line[MAX_LEN_LIMIT]; /*current input line*/
    char longestline[MAX_LEN_LIMIT]; /*longest input line*/
    max = 0;
    while((len = getaline(line, MAX_LEN_LIMIT)) > 0){
        if(len > max){
            max = len;
            copy(longestline, line);
        }
    }
    if(max > 0 )
        printf("%s", longestline);

    return 0;
}

int getaline(char line[], int lenghtlimit)
{
    int c;
    int i = 0;
    while ((c = getchar()) != EOF && c !='\n' && i < lenghtlimit)
    {
        line[i] = c;
        i++;
    }
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0')
        i++;
}