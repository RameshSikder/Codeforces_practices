#include <stdio.h>

int main() {
    long long int x;
    char str[1000];
    scanf("%lld", &x);

    sprintf(str,"%lld", x);
    printf("%c\n",  str[2]);

    return 0;
}