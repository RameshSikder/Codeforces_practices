#include <stdio.h>

int main(){
    int n,anton = 0,danik=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i =0; i<n; i++){
        if(s[i]=='A'){
            anton++;
        }
        if(s[i] == 'D'){
            danik++;
        }
    }

    if(anton>danik){
        printf("Anton\n");
    }
    else if(anton == danik){
        printf("Friendship\n");
    }
    else{
        printf("Danik\n");
    }

    return 0;
}