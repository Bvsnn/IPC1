#include <stdio.h>
    int main (){
        int x, y;
        x = 0;
        y = 1;
        if (x <= y){
            x = 3;
            if (x == y){
                x = x + 1;
            }
            else{
                x = 4;
            }
        }
        printf("%d", x);
        return 0;
    }