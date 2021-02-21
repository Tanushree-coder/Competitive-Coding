#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll x, a,b,y;
		cin>>a>>b;
        x=(a&b);
        y=(a^x)+(b^x);
        cout<<y<<"\n";
	}
	return 0;
}