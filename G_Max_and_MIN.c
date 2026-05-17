#include <stdio.h>

void Solve(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    Solve(arr,n);


    return 0;
}
void Solve(int arr[],int n){
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i<n; i++){
        if(min>arr[i]) min = arr[i];
        if(max<arr[i]) max = arr[i];
    }

    printf("%d %d\n",min, max);
}