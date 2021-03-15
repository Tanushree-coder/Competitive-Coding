#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll freq[n+1]={0};
		for(ll i=0;i<n;i++)
		{
			int x; cin>>x;
			freq[x]++;
		}
		ll ans=0;
		for(ll i=0;i<n;i++)
			ans+=(freq[i]*(n-freq[i]));
				ans/=2;
				cout<<ans<<endl;
	}
	return 0;
}