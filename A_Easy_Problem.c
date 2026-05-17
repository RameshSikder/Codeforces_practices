#include <stdio.h>

int main(){
    int t,n,a,b;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int count = 0;
        for(b = 1; b<n; b++){
            a = n-b;
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}