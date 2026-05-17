#include <stdio.h>

int main(){

    int a,b, count = 0;
    scanf("%d %d", &a, &b);
    for(int i = 1; a<=b; i++){
        a = a*3;
        b = b*2;
        count++;
    }
    printf("%d\n", count);

    return 0;
}