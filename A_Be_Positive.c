#include <stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        int neg = 0,zero = 0;
        int ans=0;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]<0) neg++;
            if(arr[i]==0) zero++;
        }
        if(neg%2 == 0){
            ans = zero*1;
            printf("%d\n",ans);
        }
        else{
            int div = (neg%2);
            ans = (div*2)+zero;
            printf("%d\n",ans);
        }
    }

    return 0;
}