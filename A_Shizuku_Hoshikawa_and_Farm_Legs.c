#include <stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    int cow = 0, hen = 0;
    while(t--){
        scanf("%d",&n);
        if(n%4 == 0 && n%2==0){
            cow = n/4;
            hen = 1;
        }
        else if(n%4 != 0 && n%2 !=0){
            cow = 0;
            hen = 0;
        }
        else if(n%4 !=0 && n%2==0){
            cow = n/4;
            hen = (n%4)/2;
        }
        else{
            hen = n/2;
            cow = 0;
        }
        
        printf("%d\n", (cow+hen));

    }

    return 0;
}