#include <stdio.h>
#include <string.h>

int check(char arr[]);

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char arr[6];
        scanf("%s",arr);

        if(check(arr)==1){
            printf("A\n");
        }
        else{
            printf("B\n");
        }

    }

    return 0;
}

int check(char arr[]){
    int l = strlen(arr);
    int a = 0, b = 0;
    for(int i = 0; i<l; i++){
            if(arr[i] == 'A') a++;
            if(arr[i] == 'B') b++;
        }

    if(a>b){
        return 1;
    }
    else{
        return 2;
    }
    
}