#include <stdio.h>

int lowNum(int arr[], int n);
int loNumIndex(int arr[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    int lowest = lowNum(arr,n);
    int pos = loNumIndex(arr,n);
    printf("%d %d\n",lowest,pos);


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

int loNumIndex(int arr[], int n){
    int lowestNum = lowNum(arr,n);
    int position = 0;
    for(int i = 0; i< n; i++){
        if(lowestNum == arr[i]){
            position = i;
            return position+1;
            
        }
    }

    return -1;
}