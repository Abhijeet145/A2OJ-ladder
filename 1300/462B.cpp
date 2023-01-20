#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin >> n>>k;
    vector<ll> v(26,0);
    for(int i=0;i<n;i++)
    {
        char ch;
        cin >> ch;
        v[ch-'A']++;
    }

    sort(v.begin(),v.end(),greater<ll>());
    ll ans = 0,i = 0;
    while(i < v.size())
    {
        if(v[i] < k)
        {
            ans += v[i]*v[i];
            k -= v[i];
        }
        else
        {
            ans += k*k;
            break;
        }
        i++;
    }
    cout << ans<<"\n";
    return 0;
}