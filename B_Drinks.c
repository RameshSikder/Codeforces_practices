#include <stdio.h>

int main(){
    int t;
    double sum = 0;
    scanf("%d",&t);
    double arr[t];
    int i=0;
    while(t--){
        scanf("%lf",&arr[i]);
        i++;
    }

    for(int i=0; i<t; i++){
        sum +=arr[i];
    }


    double ans = sum/t;
    printf("%.12lf\n",ans);

    return 0;
}