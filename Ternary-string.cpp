#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll a=0,b=0,c=0,p=200001,x,y,z,arr[200001];
		for(ll i=0;i<s.size();i++)
		{
			arr[s[i]-'0']++;
			if(s[i]=='1') a=i+1;
			else if(s[i]=='2') b=i+1;
			else if(s[i]=='3') c=i+1;
			if(a>0&&b>0&&c>0)
			{
				x=max(a,max(b,c));
				y=min(a,min(b,c));
				z=x-y+1;
				if(z<p) p=z;
			}
		}
		if(p==200001) cout<<0<<"\n";
		else cout<<p<<"\n";
	}
	return 0;
}