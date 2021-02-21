#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i; cin>>n;
	string s; cin>>s;
	int hsh[27];
	for(i=0;i<27;i++)
		hsh[i]=0;
	int c=0;
	for(i=0;i<s.size();i++)
	{
		if((s[i]>='a')&&(s[i]<='z'))
			hsh[s[i]-'a']++;
		else
		{
			if((s[i]>='A')&&(s[i]<='Z')&&hsh[s[i]-'A']>0)
				hsh[s[i]-'A']--;
			else
				c++;
		}
		
	}
	cout<<c;
	return 0;
}