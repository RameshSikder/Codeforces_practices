#include <stdio.h>

int main(){

    int t, x,y,z;
    scanf("%d", &t);
    for(int i =1; i<=t; i++){
        scanf("%d %d %d", &x, &y, &z);
        int have = z*24*60;
        if((x*y)<=have){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }


    return 0;
}