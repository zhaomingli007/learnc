#include <stdio.h>
int htoi(char s[]);
int main()
{
    char str[] = "0xEF";
    int it = htoi(str);
    printf("%d\n", it);
    printf("%d\n", 0xEF);
    return 0;
}

int htoi(char s[]){
    int i;
    int t = 0;
    for(i=2; s[i]!='\0'; i++){
        int p;
        if (s[i] >= '0' && s[i] <= '9')
        {
            p = s[i] - '0';
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            p = s[i] - 'A' + 10;
        }
        else
        {
            p = s[i] - 'a' + 10;
        }
        t = 16 * t +p;
    }
    return t;
}