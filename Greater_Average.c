#include <stdio.h>

int main() {
     int t,x,y,z;
     scanf("%d", &t);
     while (t--) {
     scanf("%d %d %d", &x, &y, &z);
     float avg = (x+y)/2.0;
     if(z < avg){
        printf("YES\n");
     }
     else{
        printf("NO\n");
     }

     }
    return 0;
}