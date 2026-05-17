#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int odd=0;
    int even = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else odd++;
    }

    if(odd==n || even==n){
        for(int j=0; j<n ; j++){
            cout<<arr[j]<<" ";
            
        }
        
    }

    else{
    sort(arr,arr+n);
    for(int j=0; j<n ; j++){
            cout<<arr[j]<<" ";
            
        }
    }
}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}