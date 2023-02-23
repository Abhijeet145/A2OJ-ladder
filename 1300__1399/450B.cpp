#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x,y,n,mod = 1e9+7;
    cin >> x >> y >> n;
    vector<int> v = {x-y,x,y,y-x,-x,-y};
    int ans = (v[n%6]%mod + mod)%mod;
    cout << ans<<"\n";
    return 0;
}