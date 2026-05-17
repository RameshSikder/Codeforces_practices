#include <stdio.h>

int digitSum(int n);

int main(){
    int t,num;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&num);
        printf("%d\n",digitSum(num));
    }

    return 0;
}

int digitSum(int n){
    int sum = 0;
    while(n >0){
        int digit = n % 10;
        sum += digit;
        n /=10;
    }

    return sum;
}