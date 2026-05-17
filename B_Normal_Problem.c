#include <stdio.h>
#include <string.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[101],b[101];
        scanf("%s",a);
        int n = strlen(a);
        for(int i = 0; i<n;i++){
            if(a[n-1-i]=='p'){
                b[i] = 'q';
            }
            else if(a[n-1-i] == 'q'){
                b[i] = 'p';
            }
            else{
                b[i] = a[n-1-i];
            }
        }

        b[n] = '\0';
        printf("%s\n",b);

    }

    return 0;
}

