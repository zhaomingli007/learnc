#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned getbits(unsigned x, int p, int n);
int main(){

    getbits(100, 4, 3);
    unsigned r = setbits(100, 4, 3, 200);
    printf("%x\n", r);
    return 0;
}

/*11 001 00 , & 11 000 11 | *** 00 */
unsigned setbits(unsigned x, int p, int n, unsigned y){
    //1. Right most n bit of y
    
    return x & (~0 << p | ~(~0 << (p+1-n))) | ((y & ~(~0<<n)) << (p+1-n));
}

/*110 0100 -> 11001 */
unsigned getbits(unsigned x, int p, int n){
    printf("%x\n", (x >> (p+1-n)) & ~ (~0 << n) );
    return 0;
}