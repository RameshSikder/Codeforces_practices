#include <stdio.h>

int main(){

    int t, x;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d", &x);
        int b = ((x*60))/30;
        printf("%d\n", b);
    }

    return 0;
}