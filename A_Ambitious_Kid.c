#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i =0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j<N;j++){
        if(arr[j]<0){
            arr[j] = abs(arr[j]);
        }
    }
    
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(int),comp);

    printf("%d\n", arr[0]);
    



    return 0;
}