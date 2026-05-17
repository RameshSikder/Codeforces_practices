#include <stdio.h>

int main(){
    int t,x;
    scanf("%d", &t);
    while(t--){
        
        scanf("%d", &x);
        int small = 9;
        
        while(x>0){
            int r = x % 10;
            if(r<small){
                small = r;
            }
            x /=10;
        }
       
          printf("%d\n", small);
}

    return 0;
}