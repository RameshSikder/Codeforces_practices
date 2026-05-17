#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,dif,sam;
    scanf("%d %d",&a,&b);
    int div = abs(a-b);
    sam = div/2;
    if(a>b) {
        dif = b;
         printf("%d %d\n",dif,sam);
    }
    else if(b>a){
        dif = a;
        printf("%d %d\n",dif,sam);
    }
    else{
        dif = a;
        printf("%d %d\n",dif,sam);
    }
    


    return 0;
}