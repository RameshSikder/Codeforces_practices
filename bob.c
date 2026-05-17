#include <stdio.h>

int main(){
    int t, w, x, y, z;
    scanf("%d", &t);
    for(int i =1; i<= t; i++){
        scanf("%d %d %d %d", &w, &x, &y, &z);
        int ballance = w + (x-y)*z;
        printf("%d\n", ballance);
    }

    return 0;
}