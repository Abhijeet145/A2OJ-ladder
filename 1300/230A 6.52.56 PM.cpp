#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll s,n;
    cin >> s >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    cin >> v[i].first >> v[i].second;
    sort(v.begin(),v.end());
    string ans = "YES";
    for(int i=0;i<n;i++)
    {
        if(s > v[i].first)//if greater than dragon's strength
        s += v[i].second;
        else
        {
            ans = "NO";
            break;
        }
    }
    cout << ans <<"\n";
    return 0;
}