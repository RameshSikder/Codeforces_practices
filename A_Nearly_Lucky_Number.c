#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int count = 0;
    while(n > 0){
        int digit = n%10;
        n /=10;
        if(digit == 7 || digit == 4){
            count++;
        }
    }

    if(count == 4 || count == 7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}