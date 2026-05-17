#include <stdio.h>

int solve(int arr[], int n);
int min(int arr[],int n);
int divisible(int n){
    int count = 0;
    while(n % 2 != 0) {

        int div = n/2;
        count++;
        n = div;
    }
    return count;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    int ans = solve(arr,n);
    printf("%d\n",ans);

    return 0;
}
int min(int arr[],int n){
    int m = arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]<m) m = arr[i];
    }
    return m;
}

int solve(int arr[], int n){
    int count = 0;
    int arr2[n];
    for(int i =0; i<n; i++){
        if(arr[i] % 2 != 0) return 0;
        arr2[i] = divisible(arr[i]);
    }
    
    return min(arr2,n);
}