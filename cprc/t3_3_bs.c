#include <stdio.h>

int main(){
    int binarysearch(int x, int v[], int n);
    int binarysearch2(int x, int v[], int n);
    int ar[] = {1, 2, 4, 7, 12, 23, 25, 28, 31, 42, 45, 50, 55, 56, 59, 100};
    int pos = binarysearch(100, ar, 16);
    int pos2 = binarysearch2(100, ar, 16);
    printf("pos: %d, %d\n", pos, pos2);
    return 0;
}

int binarysearch(int x, int v[], int n){
    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = (high + low)/2;
        if (x == v[mid])
            return mid;
        else if (x > v[mid])
            low = mid+1;
        else 
            high = mid-1;
    }
    return -1;
}

int binarysearch2(int x, int v[], int n)
{
    int l = 0;
    int h = n-1;
    int m = (l + h)/2;

    while(l < h && v[m] != x){
        if(x > v[m]){
            l = m+1;
        }else{
            h = m-1;
        }
        m = (l+h)/2;
    }
    if(x == v[m])
        return m;
    else 
        return -1;
}