#include <stdio.h>

/*right rotate by n bit. 00 00 00 06-> 80 00 00 01 */
unsigned rrot(unsigned x, int n);
int main(){
    unsigned t = rrot(6, 2);
    printf("%x\n", t);
    return 0;
}

unsigned rrot(unsigned x, int n){
    int wordlength(void);
    unsigned int w = wordlength();
    return (x << (w-n)) | (x >> n );
}

int wordlength(void){
    int i = 1;
    unsigned int v = (unsigned int)~0;

    while ((v=(v >> 1))>0){
        i++;
    }
    return i;
}
