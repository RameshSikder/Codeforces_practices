#include <stdio.h>

int main(){
    int t,w,x,y,z;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &w, &x, &y, &z);
        if((y*z) > (x-w)){
            printf("overflow\n");
        }
        else if ((y*z) == (x-w))
        {
            printf("filled\n");
        }
        else{
            printf("Unfilled\n");
        }
        
    }
    printf("\n");

    return 0;
}