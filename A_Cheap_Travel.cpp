#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost_single = n * a;
    int cost_special = (n / m) * b + min((n % m) * a, b);

    cout << min(cost_single, cost_special) << endl;
    return 0;
}
