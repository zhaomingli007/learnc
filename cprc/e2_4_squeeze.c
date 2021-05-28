#include <stdio.h>

void squeeze(char s1[], char s2[]);
int main(){
    char s1[] = "aabcbcdefciduffacedefg";
    char s2[] = "cdf";
    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    //value to array position
    int pos[1000];
    int t;
    for(t=0;t<1000;t++){
        pos[t] = 0;
    }
    int i=0;
    while(s2[i] != '\0') {
        pos[s2[i]] = 1;
        i++;
    }
    int end =0;
    for(i=0; s1[i]!='\0';i++){
        if(!pos[s1[i]]){
            s1[end] = s1[i];
            end++;
        }
    }
    s1[end] = '\0';
}
