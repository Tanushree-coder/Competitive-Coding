#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	    ll t;
	    cin>>t;
	    while(t--)
	    {
	       ll n;
	       cin>>n;
	       ll a[n];
	       for(ll i=0;i<n;i++)
	           cin>>a[i];
	       sort(a,a+n);
	       ll p[n];
	       for(ll i=0;i<n;i++)
	       p[i]=i;
	       ll sum=0,c=0,diff=0;
	       for(ll i=0;i<n;i++)
	       {
	           diff=p[i]-a[i];
	           if(diff>=0)
	               sum+=diff;
	           else
	           {
	               c=1;
	               break;
	           }
	       }
	       if(c==1)
	       cout<<"Second"<<endl;
	       else
	       {
	           if(sum%2==0)
	           cout<<"Second"<<endl;
	           else
	           cout<<"First"<<endl;
	       }
	    }
	return 0;
}
