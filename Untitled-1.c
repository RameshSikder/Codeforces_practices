#include <stdio.h>
#include <string.h>

int main(){

    int t,x = 0 ;
    scanf("%d", &t);
    char ch[t];
    for(int i =0; i <t; i++){
        scanf("%s", ch);
        if(strcmp(ch, "++X")==0  || strcmp(ch, "X++")==0){
            x++;
        }
        if(strcmp(ch, "--X")==0  || strcmp(ch, "X--")==0){
            x--; 
        }
    }
    printf("%d\n", x);

    return 0;
}