#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int a,b,c;
    cin >> a >> b >> c;
    int n = a*b*c + 1;
    int t[n] = {0};
    for(int i = 1;i<n;i++)
    {
        for(int j = i;j<n;j+=i)
        ++t[j];
    }
    ll ans = 0;
    ll mod = pow(2,30);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                ans = (ans+t[i*j*k])%mod;
            }
        }
    }
    cout<<ans <<"\n";

    return 0;
}
