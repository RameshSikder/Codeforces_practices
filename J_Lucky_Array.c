#include <stdio.h>
int lowNum(int arr[], int n);
int frequency(int arr[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    int count = frequency(arr,n);
    if(count%2 !=0){
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }
    

    return 0;
}
int lowNum(int arr[], int n){
    int low = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i]<low){
            low = arr[i];
        }
        
    }
    return low;
}

int frequency(int arr[], int n){
    int lowest = lowNum(arr,n);
    int count =0;
    for(int i =0; i<n; i++){
        if(lowest == arr[i]){
            count++;
        }
    }
    return count;
}