#include <stdio.h>

#define MAX_SIZE_PAIRS 100
int main()
{
    int p = 0;
    int c;
    int row = 0;
    int col = 0;
    char ar[1000];
    while ((c = getchar()) != EOF)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            ar[p]=c;
            p++;
        }
        else if ((c == ')' && ar[p - 1] == '(') || (c == '}' && ar[p - 1] == '{') || (c == ']' && ar[p - 1] == '['))
        {
            p--;
        }
        else if ((c == ')' && ar[p - 1] != '(') || (c == '}' && ar[p - 1] != '{') || (c == ']' && ar[p - 1] != '['))
        {
            printf("invalid match at %d, %d\n", row, col);
            return 0;
        }

        if (c == '\n')
        {
            row++;
            col = 0;
        }
        else
        {
            col++;
        }
    }
    if(p==0)
        printf("no error\n");
    else
        printf("invalid\n");

    return 0;
}