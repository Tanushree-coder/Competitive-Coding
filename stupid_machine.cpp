#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a,i,s[n];
        for(i=0;i<n;i++)
           cin>>s[i];
        a=s[0];
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            if(s[i]<a)
            a=s[i];
            sum=sum+a;
        }
        cout<<sum<<endl;
    }
}