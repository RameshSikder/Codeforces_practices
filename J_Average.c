#include <stdio.h>

float mean(float arr[],int n);

int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0; i<n; i++){
        scanf("%f", arr[i]);
        
    }

    float m  = mean(arr,n);
    printf("%.7f\n",m);



    return 0;
}

float mean(float arr[],int n){
    float sum = 0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    float mean = sum/n;
    return mean;
}