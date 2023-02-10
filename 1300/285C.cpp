#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
#define v_int vector<int>

int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    vector<ll> v(n);
    f0tn
    cin >> v[i];
    sort(v.begin(),v.end());
    ll ans = 0;
    f0tn{
        ans += abs(v[i] - (i+1));
    }

	cout<<ans<<endl;
    return 0;
}
