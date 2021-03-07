#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		ll c=0;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
			    c++;
				while(s[i]=='1')
					i++;
			}
			
		}

		cout<<c<<"\n";
	}
	return 0;
}