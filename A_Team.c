#include <stdio.h>

int main(){
    int t,a,b,c;
    scanf("%d", &t);
    int count =0;
    while(t--){
        scanf("%d %d %d", &a,&b,&c);
        if(a+b+c >= 2){
            count++;
        }
        
    }
    printf("%d\n",count);

    return 0;
}