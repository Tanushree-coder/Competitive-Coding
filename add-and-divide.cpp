#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while (t--)
	{
		ll a,b,ans=1e18,c,f=0;
		cin>>a>>b;
		if(b>a)
			ans=1;
		else
		{
			for(ll i=0;i*i<30;i++)
			{
				if(b==1&&i==0)
					continue;
				c=i;
				ll p=a;
				while(p)
				{
					p/=(b+i); c++;
				}
                   	ans=min(ans,c);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}