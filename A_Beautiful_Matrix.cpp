#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans;
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5;j++){
            cin>>n;
            if(n == 1) {
                ans = abs(3-i) + abs(3-j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}