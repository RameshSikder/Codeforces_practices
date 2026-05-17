#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(isPrime(n)==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }


    return 0;
}
int isPrime(int n){
    if(n<2) return 0;
    if (n == 2) return 1;
    if(n>2 && n%2==0) return 0;
    int l = sqrt(n);
    for(int i = 3; i<=l; i +=2){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}