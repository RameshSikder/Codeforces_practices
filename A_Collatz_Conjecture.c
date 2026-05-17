#include <stdio.h>

int main() {
     int t,x, k, temp;
     scanf("%d", &t);
     while (t--) {
     scanf("%d %d", &x, &k);
        for(int i =1; i<=k; i++){
            if(x%2 !=0){
                temp = (3*x) + 1;
            }
            else{
                temp = x/2;
            }
        }
        printf("%d\n", temp);

        
        
     }
     return 0;
    }
