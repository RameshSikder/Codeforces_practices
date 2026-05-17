#include <stdio.h>


int main(){

    int t,x,y,z;
    scanf("%d", &t);
    for(int i =1; i <= t; i++){
        scanf("%d %d %d", &x, &y, &z);
        int avlb = x*10; 
        if(y<=avlb){
            printf("%d\n", (y*z));
        }
        else{
            printf("%d\n", avlb*z);

        }
    }

    return 0;
}