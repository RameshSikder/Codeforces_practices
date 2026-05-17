#include <stdio.h>
#include <string.h>

int main(){
    int n, value = 0;
    scanf("%d", &n);
    char ch[50];
    while(n--){
        scanf("%s", ch);
        if(strcmp(ch, "++X")==0 || (strcmp(ch, "X++"))==0){
            value++;
        }
        if(strcmp(ch, "--X")==0  || strcmp(ch, "X--")==0){
            value--; 
        }
    }
    printf("%d\n", value);

    return 0;
}