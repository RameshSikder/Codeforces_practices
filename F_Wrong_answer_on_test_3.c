#include <stdio.h>

int main(){
    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld", &A,&B,&C,&D);
    double solution = (double)(A*B+C)/D;
    printf("%.10lf\n",solution);
    return 0;
}