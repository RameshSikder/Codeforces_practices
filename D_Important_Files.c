#include <stdio.h>

int main() {
     int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int need = (x*z) ;
    if(need % y ==0 ){
        printf("%d\n",(need/y));
    }
    else{
        int div = (need/y) + 1;
        printf("%d\n", div);
    }

     
    return 0;
}