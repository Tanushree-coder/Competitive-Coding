#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	map<int,int> m;
int n; cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a; cin>>a;
		m[a]++;
	}
	int ans=0;
	for(auto it: m)
		{ 
			int a=it.first;
			int freq[a];
			 freq[a]=it.second;
			if(a<=freq[a])
				ans+=freq[a]-a;
			else
				ans+=freq[a];
		}
		cout<<ans;
	return 0;
}