#include <stdio.h>

int main(){

    int t, a,b;
    scanf("%d", &t);
    for(int i =1; i<=t; i++){
        scanf("%d %d", &a, &b);
        int total_tyre = (a*2)+(b*4);
        printf("%d\n", total_tyre);
    }

    return 0;
}