#include <stdio.h>
#include <math.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        int sum = 0;
        for(int i=0; i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int j = 0; j<n; j++){
            sum += arr[j];
        }

        if(sum%n == 0 ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }

    return 0;
}