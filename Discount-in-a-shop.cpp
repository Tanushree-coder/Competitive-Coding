#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i, max, t, n, c = 0, j;
    string N, O;
    cin >> t;
    for (j = 0; j < t; j++)
    {

        cin >> n;
        N = to_string(n);
        max = stoll(N);
        for (i = 0; i < N.length(); i++)
        {
            O = N;
            O = O.erase(i, 1);
            if (stoll(O) < max)
                max = stoll(O);
        }
    
    cout << max<<endl;
    }
    return 0;
}