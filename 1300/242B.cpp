#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    int n;
    cin >> n;
    vector<prll> arr(n);
    ll mini = 1e9+1,maxi = 0;
    f0tn
    {
        ll a,b;
        cin >> a >> b;
        arr[i] = {a,b};
        mini = min(mini,a);
        maxi = max(maxi,b);
    }
    ll ans = -1;
    f0tn
    {
        prll temp = {mini,maxi};
        if(arr[i] == temp)
        {
            ans = i+1;
            break;
        }
    }
    cout << ans <<"\n";

    return 0;
}
