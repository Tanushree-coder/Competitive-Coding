#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll a[n],i,c=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n-1;i++)
		{
			if(a[i]>=a[i+1])
				c++;
		}
		if(c==n-1)
			cout<<"NO\n";
		else 
			cout<<"YES\n";
	}
	return 0;
}