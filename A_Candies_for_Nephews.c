#include <stdio.h>

int main(){
    int t,n, ans;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n%3 == 0){
            printf("0\n");
        }
        else{
            int num = n;
            while(num % 3 !=0){
                num = num +1;
            }
            ans = num - n;
            printf("%d\n", ans);
        }
    }

    return 0;
}