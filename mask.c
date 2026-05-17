#include <stdio.h>

int main(){

    int t, x,y;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d %d", &x, &y);
        if((x*100)<(y*10)){
            printf("Disposable\n");
        }
        else{
            printf("Cloth\n");
        }
    }

    return 0;
}