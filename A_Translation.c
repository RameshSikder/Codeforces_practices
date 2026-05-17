#include <stdio.h>
#include <string.h>

int main(){
    char s1[105];
    char s2[105];
    scanf("%s", s1);
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)){
        printf("NO\n");
        return 0;
    }

    int valid = 0;
    for(int i =0; i<strlen(s1);i++){
        if(s1[i] == s2[strlen(s2)-1-i]){
            valid++;
        }
    }

    if(valid == strlen(s1)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}