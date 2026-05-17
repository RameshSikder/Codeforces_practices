#include <stdio.h>

int solve(int arr[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    if(solve(arr,n) == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

int solve(int arr[], int n){
    for(int i =0; i<n/2; i++){
        if(arr[i] != arr[n-1-i]){
            return 0;
        }
    }
    
    return 1;
}