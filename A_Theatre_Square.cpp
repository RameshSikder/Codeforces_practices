#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n,x,l,w;
    cin>>m>>n>>x;
    if(m % x !=0){
        l = (m/x)+1;

    }else{
        l = (m/x);

    }

    if(n %x !=0){
        w = (n/x)+1;
    }
    else{
        w = n/x;
    }

    cout<<l*w<<endl;
    return 0;
}