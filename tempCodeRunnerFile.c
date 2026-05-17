<<<<<<< HEAD
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
=======
#include <stdio.h>

int main(){

    int t, x,y;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d %d", &x, &y);
        if((x*100)<(y*10)){
            printf("Disposal\n");
        }
        else{
            printf("Cloth\n");
        }
    }

    return 0;
>>>>>>> 250918b6ac81f6a90709b86f7d65306203e19643
}