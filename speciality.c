#include <stdio.h>

int main(){

    int t,x,y,z, max;
    scanf("%d", &t);
    for(int i = 1; i <=t; i++){
        scanf("%d %d %d", &x, &y, &z);
        max = x;
        if(y>=max){
            max =y;
        }
        if(z>max){
            max =z;
        }

        if(x == max){
            printf("Setter\n");
        }
        else if(y == max){
            printf("Tester\n");
        }
        else if (z == max){
            printf("Editorialist\n");
        }


    }
    return 0;
}