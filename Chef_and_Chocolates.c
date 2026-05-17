#include <stdio.h>

int main(){
    int t,c,y,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &c, &x, &y);
        int cost = (c-x)*y;
        printf("%d\n", cost);
    }

    return 0;
}