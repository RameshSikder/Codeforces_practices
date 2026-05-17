#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100];
    char s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    for(int i=0;s1[i] != '\0';i++){
        s1[i]= tolower(s1[i]);
    }
    
    for(int j=0;s1[j] != '\0';j++){
        s2[j]= tolower(s2[j]);
    }

    int cmp = strcmp(s1,s2);

    if(cmp < 0){
        printf("-1\n");
    }
    else if(cmp > 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}