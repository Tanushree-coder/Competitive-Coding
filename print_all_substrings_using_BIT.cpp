#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={9,6,7},i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i&(1<<j))>0)
				cout<<a[j]<<" ";

		}
		cout<<endl;
	}
	return 0;
}