#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mex=200001;
int cf[26][mex];
bool check(int mid,int fr[26])
{
	int c=0;
	for(int i=0;i<26;i++)
	{
		if(fr[i]<=cf[i][mid])
			c++;
	}
	if(c==26) return true;
	else
	return false;
}
signed main()
{
	int n; cin>>n;
	string s; cin>>s;
	for(int i=0;i<s.size();i++)
		cf[s[i]-'a'][i]=1;
	for(int i=1;i<s.size();i++)
	{
		for(int j=0;j<26;j++)
			cf[j][i]+=cf[j][i-1];
	}
	int m; cin>>m;
	while(m--)
	{
		string t; cin>>t;
		int fr[26]={0};
		for(int i=0;i<t.size();i++)
			fr[t[i]-'a']++;
		int lo=0,hi=n-1,id=0;
		while(hi-lo>=0)
		{
			int mid=(hi+lo)/2;
			if(check(mid,fr))
			  {  hi=mid-1;id=mid;}
			else
				lo=mid+1;
		}
		cout<<id+1<<"\n";
	}
}