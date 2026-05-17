#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sumX = 0, sumY = 0, sumZ = 0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        sumX += a;
        sumY += b;
        sumZ += c;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}