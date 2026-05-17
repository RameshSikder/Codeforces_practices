#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void solve(int arr[],int n);
void printArray(int arr[], int n);

int main(){
    char arr[100];
    int arr2[100];
    scanf("%s",arr);
    int digit = 0;
    for(int i= 0; i< strlen(arr); i++){
        if(arr[i] != '+') {
            arr2[digit++] = arr[i] - '0';
        }
        

    }

    
    solve(arr2,digit);
    printArray(arr2,digit);


    return 0;
}
void solve(int arr[],int n){
    int temp;
    for(int i=0; i<n;i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

}
}

void printArray(int arr[],int n){

    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
        if(i != n-1) printf("+");
    }
}