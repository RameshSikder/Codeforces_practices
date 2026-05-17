#include <stdio.h>

int main(){
    int t, x,y,z, mango;
    scanf("%d", &t);
    for(int i =1; i<=t; i++){
        scanf("%d %d %d", &x, &y, &z);
         mango = (z-y)/x;
        printf("%d\n", mango);;
    }

    return 0;
}