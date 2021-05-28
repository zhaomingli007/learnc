#include <stdio.h>
/*Find first location in s1 where any char occurs from s2.*/
int any(char s1[], char s2[]);
int main(){

    int p = any("abced","fsssdacb");
    printf("%d\n", p);
    return 0;
}

int any(char s1[], char s2[]){
    int pos[1000];
    int i;
    for(i=0; i< 1000; i++)
        pos[i] = 0;
    i=0;
    while (s1[i] != '\0')
    {
        pos[s1[i]] = i;
        i++;
    }
    i=0;
    while (s2[i] != '\0')
    {
        if (pos[s2[i]])
        {
            return pos[s2[i]];
        }
        i++;
    }
    return -1;
}
