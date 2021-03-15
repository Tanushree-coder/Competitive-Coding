#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n; cin>>n;
	ll a[n+1],freq[1000001]={0};
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		freq[a[i]]++;
	}
	sort(a,a+n);
	ll max=a[n-1]; ll ans[1000001]={0};
	
	for(ll i=1;i<1000001;i++)
	{
		for(ll j=i;j<max;j+=i)
			ans[i]+=freq[j];
	}
	ll q; cin>>q;
	while(q--)
	{
		ll x; cin>>x;
		cout<<ans[x]<<"\n";
	}
	return 0;
}