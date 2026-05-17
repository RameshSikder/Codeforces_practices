#include <stdio.h>

int main(){
    int X,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &X);
        int r1,r2,ans =0;
        if(X%10==0){
            ans = X/10;
        }
        else if(X % 5 ==0 || X % 10 == 0)
        {
            r1 = X/5;
            r2 = X/10;
            if(r1<r2){
                ans = r1;
            }
            else{
                ans = r2+1;
            }
        }
        else{
            ans = -1;
        }
        printf("%d\n",ans);
    }

    return 0;
}