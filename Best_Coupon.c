#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
     int t,x,disount;
     scanf("%d", &t);
     while (t--) {
     scanf("%d", &x);
     
     int discount1 = (x*10)/100;
     int discount2 = 100;

     if(discount1>discount2){
        printf("%d\n", discount1);
     }
     else{
        printf("%d\n", discount2);
     }

     }
    return 0;
}