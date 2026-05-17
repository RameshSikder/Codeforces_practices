#include <stdio.h>

int solve(int arr[],int n){

    for(int j = 0; j<n; j++){
            if(arr[j] == 67){
                return 1;
            }
            
        }

        return 0;
}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i< n; i++) scanf("%d",&arr[i]);

        if(solve(arr,n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}