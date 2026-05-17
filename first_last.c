#include <stdio.h>

int first_last_SUM(int n);

int main(){
    int t,n;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d", &n);
        printf("%d\n", first_last_SUM(n));

    }

    return 0;
}

int first_last_SUM(int n){
    int sum =0;

    int last = n % 10; 

    while(n >= 10){
        n = n/10;
    }
    int first = n;

    return first + last;
}