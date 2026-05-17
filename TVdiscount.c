#include <stdio.h>

int main(){

    int t, a,b,c,d;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d %d %d %d", &a,&b,&c,&d);
        int first = a - c;
        int second = b - d;
        if(first> second){
            printf("First\n");
        }
        else if(first == second){
            printf("Any\n");
        }
        else{
            printf("Second\n");
        }
    }

    return 0;
}