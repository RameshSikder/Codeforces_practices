#include <stdio.h>
#include <string.h>

int solve(char arr[]){
    int j;
    int l = strlen(arr);
    if(l%2 !=0) return 0;
    for(int i = 0,j = (l/2);i< (l/2),arr[j] !='\0';i++,j++){
        if(arr[i] != arr[j]) return 0;
    }

    return 1;
}

int main(){
    int t;
    char s[101];
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        if(solve(s)==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
