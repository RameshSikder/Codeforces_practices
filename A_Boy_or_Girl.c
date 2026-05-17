#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count = 0;
    
    for(int i=0; i<strlen(str); i++){
        int flag = 1;
        for(int j = 0 ; j< i;j++){
            if(str[i] == str[j]){
                flag = 0;
                break;
            }
        }
        if(flag==1) count++;
        }


        if(count % 2 ==0){
            printf("CHAT WITH HER!\n");
        }
        else{
            printf("IGNORE HIM!\n");
        }
    return 0;
}

