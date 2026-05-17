#include <stdio.h>

int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int earn = (n*p);
    float site_cost = earn*0.2;
    int profit = earn - site_cost;
    printf("%d\n", profit);

    return 0;
}