# include <stdio.h>

int main() {
    int c;
    int p=0;
    while((c = getchar()) != EOF){
        if(p!=' ' || c!=' '){
            putchar(c);
        }
        p = c;
    }

    return 0;
}
