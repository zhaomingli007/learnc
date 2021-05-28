#include <stdio.h>
#include <std>

void itoa(int n, char s[]);
int main(){
    

    return 0;
}
void itoa(int n, char s[]){
    int i, sign;
    if(n<0) {
        sign = -1;
        n = -n;
    }
    do{
        s[i++] = n % 10 + '0';
    }while ( (n /= 10)> 0);
    if(sign<0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}