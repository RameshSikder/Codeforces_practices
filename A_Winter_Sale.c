#include <stdio.h>

int main(){
    float x,p;
    scanf("%f %f",&x,&p);
    float discount = 1-(x/100);
    float ans = p/discount;
    printf("%.2f\n",ans);

    return 0;
}