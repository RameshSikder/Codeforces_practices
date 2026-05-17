#include <stdio.h>

int main() {
    long long int t;
    long long int a, b;
    scanf("%lld", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%lld %lld", &a, &b);

        if (a % b == 0) {
            printf("0\n");
        }
        else if (a < b) {
            printf("%lld\n", b - a);
        }
        else {
            long long int div = a / b;
            long long int rem = b * (div + 1) - a;
            printf("%lld\n", rem);
        }
    }

    return 0;
}
