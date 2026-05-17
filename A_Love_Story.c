#include <stdio.h>
#include <string.h>


int main(){
    int t;
    scanf("%d",&t);
    char s[10];
    char s2[]="codeforces";
    while(t--){
        scanf("%s",s);
        int count = 0;
        for(int i=0; s2[i] !='\0';i++){
            if(s2[i] != s[i]){
                count++;
            }
        }
        printf("%d\n",count);
    }


    return 0;
}