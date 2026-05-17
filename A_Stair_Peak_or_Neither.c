#include <stdio.h>

int main() {
     int t,a,b,c;
     scanf("%d", &t);
     while (t--) {
        scanf("%d %d %d", &a, &b, &c);
        if(b>a && c>b){
            printf("STAIR\n");
        }
        else if(b>a && b>c){
            printf("PEAK\n");
        }
        else{
            printf("NONE\n");
        }
     }
    return 0;
}