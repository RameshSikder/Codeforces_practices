#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int arr[]={a,b,c,d};
    int cnt = 0;
    for(int i =0; i<4;i++){
        int found = 0;
        for(int j=i-1;j>=0;j--){
            if(arr[i] == arr[j]) {
                found = 1;
                break;
            }
            
        }
        if(found == 0) cnt++;
    }
    
    printf("%d\n",4-cnt);
   

    return 0;
}