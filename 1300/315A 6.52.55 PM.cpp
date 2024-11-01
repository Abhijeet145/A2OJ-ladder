#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        mp[b]++;
        vec.push_back({a,b});
    }
    int ans= 0;
    for(auto x:vec)
    {
        if(mp[x.first] == 0 ||(mp[x.first]==1 && x.first == x.second))
        ans++;
    }

    
    cout << ans <<"\n";
    return 0;
}