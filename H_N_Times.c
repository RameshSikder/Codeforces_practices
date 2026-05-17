#include <stdio.h>

void solve(int n,char ch){
    for(int i = 1; i<=n; i++){
        printf("%c",ch);
        if(i<n) printf(" ");
    }
}

int main(){
    int n,t;
    char ch;
    scanf("%d",&t);
    while(t--){
        scanf("%d %c",&n,&ch);
        solve(n,ch);
        printf("\n");
    }

    return 0;
}