#include <stdio.h>
int main(){
    int x, i, control;
    x = 4;
    i = 0;
    while (control == 1){
        i = i + 2;
        x = x + 1;
        if (x <= i){
            control = 0;
        }
    }
    printf("%d", i);
    return 0;
}