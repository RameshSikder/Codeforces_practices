#include <stdio.h>
#include <stdlib.h>

int solve(int arr[], int n);

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n", solve(arr,n));
    }




    return 0;
}

int solve(int arr[], int n){
    int difSum = 0;
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int l = n-1;
    int arr2[l];
    int indx = 0;
    int remove = 0;
    for(int j = 0; j<n;j++){
        if(arr[j] == max && remove == 0){
            remove = 1;
            continue;
        }
        arr2[indx++] = arr[j];
    }

    for(int k = 0; k<indx-1; k++){
        difSum += abs(arr2[k] - arr2[k+1]);
    }

    return difSum;
}