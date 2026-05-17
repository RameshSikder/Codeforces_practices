#include <stdio.h>

int main(){
    int t,a,b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a,&b);
        int ans = b - a;
        printf("%d\n",ans);
    }

    return 0;
}