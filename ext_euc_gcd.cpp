#include<bits/stdc++.h>
using namespace std;
int gcd_ext(int a,int b, int*x,int*y)
{
	if(b==0)
	{
		*x=1; *y=0;
		return a;
	}
	int x1,y1;
	int d=gcd_ext(b,a%b,&x1,&y1);
	*x=y1;
	*y=x1-y1*(a/b);
	return d;
}
void modinv(int a, int m)
{
	int x,y;
	int g=gcd_ext(a,m,&x,&y);
	if(g!=1)
		cout<<"Inverse doesn't exist";
	else
	{
		int res=(x%m+m)%m;
		cout<<"Modular multiplicative inverse:"<<res;
	}
}
int main()
{
	int a,m;
	cin>>a>>m;
	modinv(a,m);
	return 0;
}