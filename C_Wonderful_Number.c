#include <stdio.h>

void solve(int n);
void check_odd_and_solve(int n);

int main(){
    int n;
    scanf("%d",&n);
    check_odd_and_solve(n);

    return 0;
}

void solve(int n){
    int arr[10000];
    int i =0;
    while(n>0){
        arr[i] = n % 2;
        n /= 2;
        i++;
    }
    int l = i;
    int flag = 1;
    for(int i = 0; i < l/2 ; i++){
        if(arr[i] != arr[l-1-i]){
            flag = 0;
            break;
        }
       
    }
    if(flag){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}
void check_odd_and_solve(int n){
    if(n % 2 !=0){
        solve(n);
    }
    else{
        printf("NO\n");
    }
}