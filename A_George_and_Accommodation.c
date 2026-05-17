#include <stdio.h>

int main(){
    int n,p,a;
    scanf("%d", &n);
    int cnt=0;
    while(n--){
        scanf("%d %d",&p, &a);
        if(a>p && (a-p)>=2) cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}