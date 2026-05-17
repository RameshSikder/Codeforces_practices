#include <stdio.h>

int main(){
    int t, x,y;
    scanf("%d" ,&t);

    while(t--){
        scanf("%d %d", &x, &y);
        float towin= x*1.07;
        if(y<=towin){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    

    return 0;
}