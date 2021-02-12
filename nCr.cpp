#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int power(ll x,ll y,ll mod)
{
    if(y==0)
    return 1;
    ll ans=power(x,y/2,mod);
    if(y%2==0)
    return (ans*ans)%mod;
    return ((ans*ans)%mod*x%mod)%mod;
   
}
ll modInv(ll n,ll mod)
{
    return power(n,mod-2,mod);
}
ll nCr(ll n,ll r,ll mod)
{
    if(n<r)
    return 0;
    if(r==0)
    return 1;
    ll fact[n+1];
    fact[0]=1;
    ll i;
    for(i=1;i<=n;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;

    }
    return (fact[n]*modInv(fact[r],mod)%mod*modInv(fact[n-r],mod)%mod)%mod;
}
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        ll mod=1000000007;
        ll ans=nCr(n,r,mod);
        cout<<ans<<endl;
    }
    
}