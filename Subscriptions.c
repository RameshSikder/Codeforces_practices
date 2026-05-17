#include <stdio.h>

int main() {
     int t,x,y;
     scanf("%d", &t);
     while (t--) {
     scanf("%d %d", &x, &y);
     if(x == 1){
        printf("%d\n",y);
     }
     else if(x%6 == 0){
        printf("%d\n", (x/6)*y);
     }
     else{
        int div = x/6;
        printf("%d\n", (div*y)+y);
     }

     }
    return 0;
}