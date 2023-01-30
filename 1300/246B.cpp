#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    f0tn
    {
        ll num;
        cin >> num;
        sum += num;
    }
    int ans = n-1;
    if(sum%n==0)
        ans = n;
    cout << ans <<"\n";

    return 0;
}
