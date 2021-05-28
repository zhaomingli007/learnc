#include <stdio.h>

int main(){
    void upper2low(char lett[]);

    char lett[]="HELLO how ARE YoU!";
    upper2low(lett);
    printf("%s\n", lett);
    return 0;
}
void upper2low(char lett[]){
    int c;
    int i = 0;
    while (lett[i] != '\0')
    {
        lett[i] = lett[i] >= 'A' && lett[i] <= 'Z' ? lett[i] - 'A' + 'a' : lett[i];
        i++;
    }
}
