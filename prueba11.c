#include <stdio.h>
int main (){
int a, b, c;
a = 2;
b = 1;
c = 3;
if (a > b){
    if (a > c){
        if (b > c){
            printf("%d %d %d", a, b, c);
        }
        else{
            printf("%d %d %d", a, c, b);
        }
    }
    else{
        printf("%d %d %d", c, a, b);
    }
}
else{
    if (b > c){
        if (a > b){
            printf("%d %d %d", b, a, c);
        }
        else{
            printf("%dc %d %d", b, c, a);
        }
    }
    else{
        printf("%d %d %d", c, b, a);
    }
}
return 0;
}