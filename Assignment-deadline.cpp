#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k; cin>>n;
	ll t[n+1];
	for( ll i=0;i<n;i++)
		cin>>t[i];
		sort(t,t+n);
		ll max=t[n-1];
	cin>>k;
	ll lo=1,hi=max;
	while(lo<hi)
	{
		ll mid=(lo+hi)/2;
		ll days=0;
		for(ll i=0;i<n;i++)
		{
			days+=t[i]/mid;
			if(t[i]%mid!=0)
				days++;
		}
		if(days<=k)
			hi=mid;
		else
			lo=mid+1;

	}
	cout<<lo<<"\n";

		return 0;
}