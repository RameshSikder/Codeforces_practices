#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);

    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double psi = (1 - sqrt5) / 2;

    double x = pow(phi, n);
    double y = pow(psi, n);

    long long fib = (long long)((x - y) / sqrt5 + 0.5);

    printf("%lld\n", fib);

    return 0;
}
