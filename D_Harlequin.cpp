#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
	ll n; cin>>n;
	ll a[n+1];
     for(ll i=1;i<=n;i++)
      	cin>>a[i];
	 ll f=0;
	 for(ll i=1;i<=n;i++)
    {
    	if(a[i]%2!=0)
    	{
    		f=1; 
    		break;
		}
	}
	if(f==1)
	cout<<"first\n";
	else 
	cout<<"second\n";
}