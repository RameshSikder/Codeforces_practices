#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  A,B;
    int t;
    cin>>t;
    while(t--){
        cin>>A>>B;
        if(((A-1)*(B-1)) >= 1) {
            cout<<"Yourself"<<endl;

        }
        else if (((A-1)*(B-1)) <= 0)
        {
            cout<<"Believe"<<endl;
        }
        
        else{
            cout<<"In"<<endl;
        }
    }

    return 0;
}
