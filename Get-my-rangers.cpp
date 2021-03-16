#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll a[n+1];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll cur=a[0],c=1,ways=0;
		vector<ll> v(n+1);
		for(ll i=1;i<n;i++)
		{
			if(a[i]==cur)
				c++;
			else{
				v.push_back(cur*c);
			    cur=a[i];
				c=1;
			
			}
		}
		v.push_back(cur*c);
		ll strength=0;
		for(ll i=0;i<v.size();i++)
			strength=max(strength,v[i]);
		for(ll i=0;i<v.size();i++)
		{
			if(v[i]==strength)
				ways++;
		}
		cout<<strength<<" "<<ways<<"\n";
	}
	return 0;
}