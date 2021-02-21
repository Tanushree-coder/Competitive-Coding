#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ll n,a,b,t;
    cin>>t;
    while(t--)
    {
        ll sum=0,xo=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a,xo^=a;
        }
        if(sum==2*xo)
            cout<<0<<"\n\n";
        else
        {
            cout<<2<<"\n";
            cout<<xo<<" "<<sum+xo<<"\n";
        }
    }
    return 0;
}