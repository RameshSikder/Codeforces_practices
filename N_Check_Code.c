#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int l = a+b+1;
    char arr[l+1];
    scanf("%s",arr);
    if(strlen(arr) != (a+b+1)){
        printf("No\n");
        return 0;
    }
    for(int i = 0; i<strlen(arr); i++){
        if (i == a) continue;    
        if (arr[i] < '0' || arr[i] > '9'){
            printf("No\n");
            return 0;
        }
    }

    if(arr[a] == '-'){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}