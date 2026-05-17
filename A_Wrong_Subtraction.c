#include <stdio.h>


int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    while(n--){
        int last_digit = num % 10;
        if(last_digit == 0) {
            num /=10;
        }
        else{
            num--;
        }
    }
    printf("%d\n",num);


    return 0;
}