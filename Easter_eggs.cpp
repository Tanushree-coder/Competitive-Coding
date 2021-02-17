#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,a=n/7,b=n%7;
    char x[]="VIBGYOR";
    for(i=0;i<a;i++)
    {
        for(j=0;j<=6;j++)
            cout<<x[j];
    }
    if(b==0)
    {
        return 0;
    }
    else if(b>=4)
    {
        for(i=0;i<b;i++)
            cout<<x[i];
    }
    else
    {
        for(i=0;i<b;i++)
            cout<<x[i+3];
    }
}