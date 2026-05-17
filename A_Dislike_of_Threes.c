#include <stdio.h>

int solve(int n);

int main(){
    int t,num;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&num);
        int j = 1;
        int ans;
        for(int i =1; i<num; i++){
            while(j>0){
                if(j%3 != 0 || solve(j) != 3){
                    ans = j;
                    j++;
                }

            }
            printf("%d\n",ans);
        }
    }
    

    return 0;
}

int solve(int n){
    

    return n%10;
}