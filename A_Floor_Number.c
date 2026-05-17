#include <stdio.h>

int main(){
    int t,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&x);
        if(n<=2) printf("1\n");
      
      else{
            int floor = ((n-2)+(x-1))/x;
            printf("%d\n",floor+1);
        }
    }

    return 0;

}
