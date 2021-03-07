#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;  cin>>t;
    while(t--)
    {
        ll c,cnt=0; cin>>c;
    
        
         int k = (int)(log2(c));
         ll q=(1 << k);
        ll a,b;
        b=q-1; a=c^b;
       cout<<a*b<<"\n";
    }
    return 0;
}