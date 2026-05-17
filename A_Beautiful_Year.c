#include <stdio.h>

int solve(int year){
    int digit[10]={0};
    while(year>0){
        int d = year % 10;
        if(digit[d])  return 0;
        digit[d] = 1;
        year /=10;
    }
    return 1;
}

int main(){
    int year;
    scanf("%d",&year);

    while (1)
    {
        year++;
        if(solve(year)){
            printf("%d\n",year);
            break;
        }
    }
    

    return 0;
}