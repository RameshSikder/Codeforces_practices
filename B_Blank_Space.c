#include <stdio.h>

int checkZero(int arr[],int n){
    int count_space =0;
    int i, space = 0;
    for(i = 0; i<n; i++){
        if(arr[i]==0){
            count_space++;
            
            if(count_space>space) space = count_space;
            
        }
        else{
            count_space = 0;
    
    }
   
}
return space; 

}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int space = checkZero(arr,n);
        printf("%d\n",space);

    }

    return 0;
}
