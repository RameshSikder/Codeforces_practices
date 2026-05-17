#include <stdio.h>

int main(){
    int num, count=0;
    float avg,value =0;
    while(1){
        scanf("%d",&num);
        if(num<0){
            break;
        }
        count++;
        value +=num;
    }
    avg = value/count;
    printf("%.2f\n",avg);

    return 0;
}