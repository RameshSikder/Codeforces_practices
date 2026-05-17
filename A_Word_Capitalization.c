#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string[1000];
    scanf("%s", string);

    for(int i=0; i<1;i++){
        string[i] = toupper(string[i]);
    }
    printf("%s\n",string);

    return 0;
}