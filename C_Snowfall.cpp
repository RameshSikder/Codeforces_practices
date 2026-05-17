#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int>div6, div2, div3, others;

    for(int x : a) {
        if(x % 6 == 0) div6.push_back(x);
        else if(x % 2 == 0) div2.push_back(x);
        else if(x % 3 == 0) div3.push_back(x);
        else others.push_back(x);
    }

    for(int x : div6) cout << x << " ";
    for(int x : div2) cout << x << " ";
    for(int x : others) cout << x << " ";
    for(int x : div3) cout << x << " ";

    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}