#include <stdio.h>

int main(){
    int countbits(unsigned x);
    int x = 6; //111 & 110 = 110, 110 & 101 = 100
    int t = x &= (x-1);
    printf("%x\n", t);
    int nbits = countbits(1500);
    printf("number of bits, %x: %d, \n", 1500, nbits);
    return 0;
}

int countbits(unsigned x){
    if(!x) return 0;
    int i=1;
    while ((x &= (x - 1)) != 0){
       i++;
    }
    return i;
}