#include <stdio.h>
#include <string.h>
#include <ctype.h>

int capCount(char arr[]){
    int cnt=0;
    int l = strlen(arr);
    for(int i = 0; i<l;i++){
        if(isupper(arr[i])) cnt++;
    }

    return cnt;
}

int lowCount(char arr[]){
    int cnt=0;
    int l = strlen(arr);
    for(int i = 0; i<l;i++){
        if(islower(arr[i])) cnt++;
    }

    return cnt;
}


int main(){
    char s[101];
    scanf("%s",s);
    int l = strlen(s);
    int low = lowCount(s);
    int cap = capCount(s);
    for(int i = 0; i<l; i++){
        if(cap>low){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
    printf("%s\n",s);

    return 0;
}