#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        long long splits = 0;
        while (n > 3) {
            n /= 4;
            splits++;
        }

        
        printf("%lld\n", splits);
    }

    return 0;
}
