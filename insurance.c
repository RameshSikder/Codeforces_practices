#include <stdio.h>

int main(){

    int t, x,y;
    scanf("%d", &t);
    for(int i =1; i<=t; i++){
        scanf("%d %d", &x, &y);
        if(y<=x){
            printf("%d\n", y);
        }
        else{
            printf("%d\n",x);
        }
    }

    return 0;
}