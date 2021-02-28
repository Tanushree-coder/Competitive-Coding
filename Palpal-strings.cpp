#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long int a[27]={0},p=0,c=0;
		for(int i=0;i<s.size();i++)
			a[s[i]-'a']++;
		for(int i=0;i<26;i++)
		{
			if(a[i]%2==0)
				p+=a[i]/2;
			else{
				p+=a[i]/2;
				c++;
			}
		}
		if(p>=c)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}