#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        int diff = abs(a-b);
        if(diff%10 == 0){
            int ans = diff/10;
            printf("%d\n",ans);
        }
        else{
            int ans = diff/10 + 1;
            printf("%d\n",ans);
        }

    }

    return 0;
}