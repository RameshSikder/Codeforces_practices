#include <stdio.h>

int lowNum(int arr[], int n){
    int low = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]<low){
            low = arr[i];
        }
        
    }
    return low;
}

int maxNum(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
    }
    return max;
}

void replace(int arr[], int n){
    int m = maxNum(arr,n);
    int l = lowNum(arr,n);

    if(m == l) return;

    for(int i=0; i<n; i++){
        if(m == arr[i]){
            arr[i] = l;
        }
        else if(l == arr[i]){
            arr[i] = m;
        }
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    replace(arr,n);
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}