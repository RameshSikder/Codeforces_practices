#include <stdio.h>

int max(int a,int b, int c){
    int m = a;
    if(m<b) m = b;
    if(m<c) m = c;

    return m;
}
int min(int a,int b, int c){
    int mi = a;
    if(mi>b) mi = b;
    if(mi>c) mi = c;

    return mi;

}

int main(){
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        int m = max(a,b,c);
        int mi = min(a,b,c);
        int arr[]={a,b,c};
        for(int i = 0; i<3; i++){
            if (arr[i] != m && arr[i] != mi ) 
            {
                printf("%d\n",arr[i]);
                break;
            }
            
        }

    }

    return 0;
}