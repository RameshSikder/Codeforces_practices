#include <stdio.h>
#include <string.h>

void solve(char arr[]){
    int l = strlen(arr);
    int count = 0;
    char last = arr[l-1];
    for(int i = 0; i<l; i++){
        if(arr[i] != last){
            count++;
        }
    }

    printf("%d\n",count);
}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &n);
        char arr[n];
        scanf("%s",arr);

        solve(arr);
    }

    return 0;
}