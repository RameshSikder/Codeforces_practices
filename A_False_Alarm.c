#include <stdio.h>

int main(){
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&x);
        int arr[n];
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int reach = 0;

        for(int i = 0; i<n; i++){
            if(arr[i]==0) reach++;
            else{ 
                reach +=x;
                break;
            }
        }

        for(int k = reach; k<n; k++){
            if(arr[k]==0) reach++;
            else break;

        }

        if(reach >= n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }

    return 0;
}