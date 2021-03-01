#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;
bool fun(ll mid)
{
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		ll cnt=mid/i;
		if(cnt<=n)
			ans+=cnt;
		else
			ans+=n;
	}
	if(ans>=k)
		return true;
	return false;
}
void beast()
{
	cin>>n>>k;
	ll lo=1,hi=n*n;
	while((hi-lo)>1)
	{
		ll mid=(hi+lo)/2;
		if(fun(mid))
			hi=mid;
		else lo=mid;
	}
	if(fun(lo))
		cout<<lo<<"\n";
	else
		cout<<hi<<"\n";
}
int main()
{
	beast();
	return 0;
}