#include <bits/stdc++.h>
using namespace std;
int maxIndex(int arr[], int n){
    int index = 0;
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }

    return index;
}

int minIndex(int arr[],int n){
    int index = 0;
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<=min){
            min = arr[i];
            index = i;
        }
    }

    return index;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int mx = maxIndex(arr,n);
    int mn = minIndex(arr,n);
    int ans = mx+(n-1-mn);

    if(mx>mn) ans--;
    cout<<ans<<endl;


    return 0;
}