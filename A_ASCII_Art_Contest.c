#include <stdio.h>

int max(int a, int b, int c){
    int m = a;
    if(m<b) m = b;
    if(m<c) m = c;

    return m;
}
int min(int a,int b, int c){
    int l = a;
    if(l>b) l=b;
    if(l>c) l = c;

    return l;
}

int main(){
    int g,c,l;
    scanf("%d %d %d",&g,&c,&l);

    int maximum = max(g,c,l);
    int minimum = min(g,c,l);
    int sum = g+c+l;
    if((maximum-minimum) >=10){
        printf("check again\n");
    }
    else{
        printf("final %d\n",sum-minimum-maximum);
    }

    return 0;
}