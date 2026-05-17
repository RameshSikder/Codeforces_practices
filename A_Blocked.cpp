#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    set<int> s;
    bool duplicate = false;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(s.count(arr[i])) {
            duplicate = true;
        }

        s.insert(arr[i]);
    }

    sort(arr, arr + n, greater<int>());

    if(!duplicate) {
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    else {
        cout << -1;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
        cout << endl;
    }
}