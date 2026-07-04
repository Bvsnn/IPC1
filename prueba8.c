#include <stdio.h>
int main(){
    int x, i;
    x = 4;
    i = 0;
    while (x > i){
        i = i + 2;
        x = x + 1;
    }
    printf("%d", i);
    return 0;
}