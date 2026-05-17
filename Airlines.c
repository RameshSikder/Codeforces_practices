#include <stdio.h>

int main(){
    int t, X,N;
    int ans;
    scanf("%d", &t);
    while (t--)
    {   
        scanf("%d %d", &X, &N);
        int re = (N+99)/100;
        int min = re - X;
        printf("%d\n",re);

    }
    


    return 0;
}