#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
     int t,x;
     scanf("%d", &t);
     while (t--) {
     scanf("%d", &x);
     if(x>= 1900){
        printf("Division 1\n");
     }
     else if (x>= 1600 && x<=1899)
     {
        printf("Division 2\n");
     }
     else if(x>= 1400 && x<= 1599){
        printf("Division 3\n");
     }
     else
     {
        printf("Division 4\n");
     }
     
     }
    return 0;
}