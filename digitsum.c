#include <stdio.h>

int digitsum(int n);

int main() {
	int t,n;
	scanf("%d", &t);
	for(int i =1; i<=t; i++){
	    scanf("%d", &n);
	    int result = digitsum(n);
        printf("%d\n", result);
	}
    
    
    return 0;
}

int digitsum(int n){
    int sum =0;
    while(n !=0){
	        int digit = n % 10;
	        sum += digit;
	        n /= 10;
	    }
        return sum;
}
