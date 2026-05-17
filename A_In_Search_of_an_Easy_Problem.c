#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    if(sum>=1){
        printf("HARD\n");
    }
    else{
        printf("EASY\n");
    }


    return 0;
}