#include <stdio.h>

int main(){
    int t, n,x, ans;
    scanf("%d", &t);
    while(t--){
     scanf("%d %d", &n,&x);
    if(x==1){
        printf("%d\n", n/3);
    }
    else{
        int div = n / x;
        ans = div / 3;
        printf("%d\n", ans);
    }
        


    }

    return 0;
}