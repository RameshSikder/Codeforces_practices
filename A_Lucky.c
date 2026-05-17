#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char arr[10];
        int first = 0, last = 0,f,l;
        scanf("%s",arr);
        for(int i = 0; i<3; i++){
            f = arr[i] - '0';
            first += f;
        }
        for(int i = 3; arr[i] !='\0'; i++){
            l = arr[i] - '0';
            last += l;
        }

        if(first == last){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}