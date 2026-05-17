#include <stdio.h>
#include <math.h>

long long nthFib(int n){
    if(n <= 1) return n;

    long long a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int checkPrime(long long int n){
    if(n<2) return 0;
    if( n==2) return 1;
    if(n%2 == 0) return 0;
    long long int l =  sqrt(n);
    for(long long int i = 3; i<=l; i=i+2){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){
    
    int t,n;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);

    long long fib =nthFib(n);

    if(checkPrime(fib)){
        printf("prime\n");
    }
    else{
        printf("not prime\n");
    }
}
    return 0;
}