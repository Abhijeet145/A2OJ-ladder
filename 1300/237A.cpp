#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
#define v_int vector<int>
#define v_bool vector<bool>
#define v_long vector<ll>

int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    map<int,int> mp;
    f0tn{
        int a,b;
        cin >> a >> b;
        mp[a*60+b]++;
    }
    int ans = 0;
    for(auto x:mp)
        ans = max(ans,x.second);

    cout << ans<<endl;

    return 0;
}


 