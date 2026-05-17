#include <stdio.h>

void sort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr,n);
    printArray(arr,n);


    return 0;
}

void sort(int arr[], int n){
    for(int i = 0; i<n ; i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }
}

