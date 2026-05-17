#include <stdio.h>

int main(){

    int t,x,y;
    scanf("%d", &t);
    for(int i =1; i<=t; i++){
        scanf("%d %d", &x, &y);
        if(x>y){
            printf("%d %d\n", y, x);
        }
        else{
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}