#include <stdio.h>

int main(){
    int t;
    long long int n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n, &k);
        int div = n%2;
        int div2 = n%k;
        int m = n - k;
        if(n%2 == 0 || n%k == 0 || n == 2|| n == k){
            printf("YES\n");
        }
        else if(k>2 && div2%2==0){
            printf("YES\n");
        }
        else if (k<2 && div%k==0)
        {
            printf("YES\n");
        }
        else if(m%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}