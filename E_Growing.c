#include <stdio.h>
 
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int ans = (z-x) / y;
    printf("%d\n",ans);
 

    return 0;
}