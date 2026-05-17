#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int current = 0;
    int capacity = 0;
    while(n--){
        int a,b;
        cin>>a>>b;
        current = (current-a)+b;
        if(current>=capacity) capacity = current;
    }

    cout<<capacity<<endl;

    return 0;
}