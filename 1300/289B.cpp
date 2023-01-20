#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m,d;
    cin >> n >> m >> d;
    unordered_set<int> rem;
    vector<int> v(n*m);
    for(int i=0;i<n*m;i++)
    {
        cin >> v[i];
        rem.insert(v[i]%d);
    }
    int ans=0;
    if(rem.size()>1)
    ans = -1;
    else
    {
        sort(v.begin(),v.end());
        int median = v[v.size()/2];
        for(auto x:v)
        ans += abs(median - x)/d;
    }
    cout << ans<<"\n";
    return 0;
}