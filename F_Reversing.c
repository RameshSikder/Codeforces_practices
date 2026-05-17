#include <stdio.h>

void reverse(int arr[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);
    for(int j = 0; j<n;j++){
        printf("%d ",arr[j]);
    }

    return 0;
}

void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int first = arr[i];
        int second = arr[n-1-i];
        arr[i] = second;
        arr[n-1-i] = first;
    }
}