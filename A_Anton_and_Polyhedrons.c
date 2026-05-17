#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[50];
    int faces=0;
    while(n--){
        scanf("%s",str);
        if(strcmp(str,"Icosahedron")== 0) faces +=20;
        if(strcmp(str,"Cube")==0) faces += 6;
        if(strcmp(str,"Tetrahedron")==0) faces += 4;
        if(strcmp(str,"Dodecahedron")==0) faces += 12;
        if(strcmp(str,"Octahedron")==0) faces +=8;
    }

    printf("%d\n",faces);
    return 0;
}