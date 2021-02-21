#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int n; cin>>n;
	int a[n][n],b[n][n];
	ll scol[n],srow[n];
	for(int i=0;i<n;i++)
	{
		scol[i]=0; srow[i]=0;
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>b[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scol[i]+=a[j][i];
				
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				srow[i]+=b[i][j];
			int q; cin>>q;
			while(q--)
			{
				char ch; int i,j,k;
				cin>>ch>>i>>j>>k;
				if(ch=='A')
				{
					scol[j]+=(-a[i][j]+k);
					a[i][j]=k;
				}
				else
				{
					srow[i]+=(-b[i][j]+k);
					b[i][j]=k;
				}
				ll res=0;
				for(int m=0;m<n;m++)
					res+=scol[m]*srow[m];

				cout<<res<<"\n";
			}
	return 0;
}