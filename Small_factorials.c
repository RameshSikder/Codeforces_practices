#include <stdio.h>

int main() {
	int num, t;
	scanf("%d", &t);
	while(t--){
        int factorial = 1;
	    scanf("%d", &num);
	    for(int i =1; i<=num; i++){
	        factorial = factorial * i;
	    }
	    printf("%d\n", factorial);
	}

}

