#include <stdio.h>

int main(){
    int n, k, count = 0;
    scanf("%d %d", &n,&k);
    int arr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int j =0; j<n; j++){
        if(arr[j]>=arr[k-1] && arr[j]>0){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}