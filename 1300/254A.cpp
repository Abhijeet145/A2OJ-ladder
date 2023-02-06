#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    //to raad and write files from text files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    n *= 2;
    unordered_map<int,int> mp;
    vector<pair<int,int>> v(n);
    f0tn
    {
        int num;
        cin >> num;
        v[i] = {num,i+1};
        mp[num]++;
    }
    sort(v.begin(),v.end());
    bool flag = true;
    for(auto x:mp)
    {
        if(x.second % 2)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        for(int i=0;i<n;i+=2)
            cout << v[i].second <<" "<<v[i+1].second <<"\n";
    }
    else
    cout<<-1 <<"\n";

    return 0;
}
