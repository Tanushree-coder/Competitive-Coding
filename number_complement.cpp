#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int n; cin>>n;
        int res=0;
        int i=0;
        while(n>0)
        {
            if((n&1)==0)
                res+=(1<<i);
            n>>=1;
            i++;
        }
        cout<<res;
        return 0;
 }