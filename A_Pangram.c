#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b); 
}

int main(){
    int n;
    scanf("%d", &n);
    char string[n+1];
    scanf("%s",string);
    char string2[]="abcdefghijklmnopqrstuvwxyz";

    for(int i = 0;string[i] != '\0';i++){
        string[i] = tolower(string[i]);
    }

    qsort(string,strlen(string),sizeof(char),comp);
    int flag = 1;
    for(int i=0; i<strlen(string);i++){
        for(int j=0; string2[j] != '\0';j++){
            if(string[i] != string2[j])
            flag = 0;
        }
    }

    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}

