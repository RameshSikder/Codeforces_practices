#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
     int t,a,b,c,x;
     scanf("%d", &t);
     while (t--) {
     scanf("%d %d %d %d", &a,&b,&c,&x);
        if(a+b >= x || b+c>=x || a+c>=x){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
     }
    return 0;
}