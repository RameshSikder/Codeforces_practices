#include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d",&n);
    char ch;
    while(n--){
        scanf("%d %c %d",&a,&ch,&b);;
        int ans =  a+b;
        printf("%d\n",ans);
    }

    return 0;
}