#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int n1 = a*b*c;
    int n2 = (a+b)*c;
    // int n3 = (a+c)*b;
    int n4= (b+c) * a;
    int n5 = b*c + a;
    // int n6 = a*c + b; 
    int n7 = b*a +c;
    int n8 = a+b+c;
    int max = n1;
    if(max<n2) max = n2;
    // if(max<n3) max = n3;
    if(max<n4) max = n4;
    if(max<n5) max = n5;
    // if(max < n6) max = n6;
    if(max < n7) max = n7;
    if(max < n8) max = n8;

    printf("%d\n",max);

    return 0;
}