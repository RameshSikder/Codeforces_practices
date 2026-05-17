#include <stdio.h>

int main(){
    int t,k,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&k,&x);
        int unvalid = k*x + 1;
        printf("%d\n",unvalid);
    }

    return 0;
}