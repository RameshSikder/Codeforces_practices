#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    int new_iq = x + 7;
    if(new_iq >= 170){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}