#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll a[n],ans[3]={0};
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<3;j++)
			{
				if(a[i]!=(i+j)%3)
					ans[j]++;
			}

		}
		ll val=n;
		for(ll i=0;i<3;i++)
			val=min(val,ans[i]);
		cout<<val<<"\n";
	}
	return 0;

}