#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,v,sum = 0;
    cin>>n;
    for(int i=1; i<=n;i++){
        cin>>v;
        sum +=v;
    }

    double result = (sum*100)/(n*100);
    cout<<fixed<<setprecision(12)<<result<<endl;
    return 0;
}