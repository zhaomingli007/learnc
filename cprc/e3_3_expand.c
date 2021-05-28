#include <stdio.h>

int main(){
    void expand(char s1[], char s2[]);

    return 0;
}

void expand(char s1[], char s2[]){
    int i;
    int j = 0;
    char p = s1[0];
    for(i=0; s1[i] != '\0'; i++){
        if (s1[i] == '-')
        {
            
        }
        else
        {
            s2[j++] = s1[i];
        }
        p = s1[i];
    }
}