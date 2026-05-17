#include <stdio.h>

int main(){
    int p1,p2,p3,p4, sum = 0, count = 0;
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
    int arr[]={p1,p2,p3,p4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n ; i++){
        if(arr[i]>=10){
            count++;
        }
    }
    
    printf("%d\n", count);


    return 0;
}