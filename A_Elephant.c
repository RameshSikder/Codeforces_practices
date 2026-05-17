#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(x%5 == 0){
        printf("%d\n", x/5);
    }
    else{
        int div = x+5;
        printf("%d", div/5);
    }

    return 0;
}