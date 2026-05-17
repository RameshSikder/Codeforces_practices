#include <stdio.h>

int main(){
    int N[10];
    int num;
    scanf("%d", &num);
    for(int i =0; i < 10; i++){
        N[i] = num;
        int temp = num+num;
        num = temp;
        printf("N[%d] = %d\n",i,N[i]);

    }

    return 0;
}