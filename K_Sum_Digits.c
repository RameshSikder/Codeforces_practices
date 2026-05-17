#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",arr);
    int sum=0;
    for(int i = 0; arr[i] != '\0';i++){
        int num = arr[i] - '0';
        sum += num;
    }
    printf("%d\n",sum);

    return 0;
}
