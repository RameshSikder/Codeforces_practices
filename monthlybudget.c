#include <stdio.h>

int main(){
    int t,x,y;
    scanf("%d", &t);
    for(int i =1; i <=t; i++){
        scanf("%d %d", &x, &y);
        int monthly_expense = (y*30);
        if(monthly_expense <=x){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    

    return 0;
}