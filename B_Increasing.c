#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;
    return val_a - val_b; 
}

void checkincrease(int arr[],int n);


int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        qsort(arr,n,sizeof(int),comp);
        checkincrease(arr,n);

    }


    return 0;
}
void checkincrease(int arr[],int n){
    int flag = 0;
    for(int i = 0; i<n-1 ;i++){
        if(arr[i+1] == arr[i]){
            flag++;
        }
        
    }
    
    if(flag>=1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}