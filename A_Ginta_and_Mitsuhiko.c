#include <stdio.h>
#include <string.h>

int main(){
    char ch;
    int y;
    scanf("%s %d",&ch, &y);
    if((strcmp(ch,"A")==0 && y%2==0) || (strcmp(ch,"C")==0 && y%2 == 0 )|| (strcmp(ch,'E')==0 && y%2==0) || (strcmp(ch,"G")==0 && y%2 == 0)){
        printf("White square\n");
    }
    else if((strcmp(ch,"A")!=0 && y%2==0) || (strcmp(ch,"C")!=0 && y%2 == 0 )|| (strcmp(ch,'E')!=0 && y%2!=0) || (strcmp(ch,"G")==0 && y%2 == 0)){
        printf("Black square\n");
    }
    else if((strcmp(ch,"B") && y%2==0) || (strcmp(ch,"D")==0 && y%2 == 0 )|| (strcmp(ch,'F')==0 && y%2==0) || (strcmp(ch,"H")==0 && y%2 == 0)){
        printf("Black square\n");
    }
    else{
        printf("White square\n");
    }


    return 0;
}