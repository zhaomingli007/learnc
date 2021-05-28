#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    printf("%d, %d\n", CHAR_MIN, CHAR_MAX);
    char minch = 0b10000000;
    char minhx = 0x80;
    char maxch = 0b01111111;
    char maxch2 = 0b10000001;
    printf("min %d, max %d, maxch2 %d, minhx %d\n", minch, maxch, maxch2, minhx);

    int imin = 0x80000000;
    int imax = 0x7FFFFFFF;
    int idmax = 1;
    while (idmax > 0 ){
        idmax = idmax << 1;
    }
    printf("imin %d:%d\n", imin, INT_MIN);
    printf("imax %d:%d, %d, %d, %d\n", imax, INT_MAX, INT_MIN, idmax, idmax - 1);

    unsigned int uimax = 0xFFFFFFFF;
    printf("uimax %u:%ld, %ld\n", uimax, LONG_MAX, LONG_MIN);

    return 0;
}