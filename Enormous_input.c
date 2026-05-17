#include <stdio.h>

int main(){
    int n,k, ans =0;
    scanf("%d %d", &n, &k);
    for(int i =1; i < n ; i++){
    if(i%k==0){
        ans ++;
    }

}
    printf("%d", ans);

    return 0;
}