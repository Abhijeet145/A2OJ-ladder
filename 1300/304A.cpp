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

    int n;
    cin >> n;
    ll ans = 0;
    for(ll i = 1;i<=n;i++)
    {
        for(ll j=i+1;j<=n;j++)
        {
            ll k = sqrt(i*i + j*j);
            if(k<=n && k*k == i*i + j*j)
            ans++;
        }
    }
    cout<<ans <<"\n";

    return 0;
}
