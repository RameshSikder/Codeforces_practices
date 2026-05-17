#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);  
}

int main(){
    int q,n;
    scanf("%d", &q);
    while(q--){
        scanf("%d", &n);
        char s[n], t[n], valid = 0,count = 0;
        scanf("%s %s",s,t);

        qsort(s,strlen(s),sizeof(char),comp);
        qsort(t,strlen(s),sizeof(char),comp);

        if(strcmp(t,s)==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}