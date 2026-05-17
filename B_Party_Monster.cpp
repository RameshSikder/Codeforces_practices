#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;

    cin >> n >> s;

    int open = count(s.begin(), s.end(), '(');
    int close = count(s.begin(), s.end(), ')');

    if(open == close)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}