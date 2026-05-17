#include <stdio.h>

int main(){
    char str[1000000];
    scanf("%[^\n]s",str);
    
    for(int i = 0; str[i] != '\\';i++){
        printf("%c",str[i]);
    }

    return 0;
}