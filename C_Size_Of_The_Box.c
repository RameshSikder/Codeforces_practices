#include <stdio.h>

int main() {
    long long int N;
    scanf("%lld", &N);
    
    int thirdDigit = (N / 100) % 10;
    
    printf("%d\n", thirdDigit);
    return 0;
}
