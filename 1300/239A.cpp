#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    ll y,k,n;
    cin >> y >> k >> n;
    ll s = y/k;
    bool flag = true;
    for(ll i = s*k;i<=n;i+=k)
    {
        if(i-y > 0)
        {
            flag = false;
            cout << i-y << " ";
        }
    }
    if(flag)
        cout << -1 <<"\n";

    return 0;
}
