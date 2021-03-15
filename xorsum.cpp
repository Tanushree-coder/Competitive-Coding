#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll xors=0;
       
       for(ll i=1;i<n;i++)
       {
           xors=(xors^a[i]);
           
       }
        ll pos[33]={0},f[33]={0};
        for(ll i=0;i<32;i++)
        {
            if(xors&(1<<i)){
                f[i]=1;
                pos[i]=i;
            }
}
            ll x=(1<<30)-1;
        for(ll i=0;i<32;i++)
        {
            if(f[i]==1)
                x=x&(~(1<<pos[i]));
}
        cout<<1<<" "<<x<<endl;

    
}
	return 0;
}




// Given an array of integers of length N. You have to change exactly one element of the array to any non-negative X in such a way that the xor sum of the array is maximised.
// Note: you can not change an element beyond 2^30-1.
// Input:
// First-line contains a single integer T, number of test cases
// The first line of each test case contains a single integer N, the size of the array
// Next line contains N space seperated integers- A[1],A[2],.....A[N].
// Output:
// For each test case, Print two space separated integer in a line- the index of the element you want to change and the changed value X.
// In case of multiple answer print any.
// Constraints:
// 1<=N,T<=10^5 
// 1<=A[i], X<(2^30)
// Sum of N over all test case will not exceed 5*10^5.
// Sample Input:
// 1
// 4
// 1 2 3 4
// Sample Output:
// 1 1073741818