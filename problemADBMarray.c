#include <stdio.h>

// Function to compute power without using pow()
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to solve the equation
int solve(int x, int n) {
    int sum = power(x, 0) - 1;   // (X^0 - 1) = 0
    for (int i = 2; i <= n; i += 2) {
        sum += power(x, i);
    }
    return sum;
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    int result = solve(x, n);
    printf("%d\n", result);

    return 0;
}
