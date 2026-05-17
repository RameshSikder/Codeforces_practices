#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int current = 0;
    int m = 0;
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        
        current = (current-a)+b;
        if(current>=m) m = current;

    }
    printf("%d\n",m);

    return 0;
}