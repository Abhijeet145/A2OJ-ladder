#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

//Macros (they replace the words with exact code so be careful while using them)
#define F first
#define S second
#define B begin()
#define E end()
#define GI greater<int>
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define FOR(i,a,b) for(ll i = a;i < b; i++)
#define f0tn for(int i=0;i<n;i++)



////////////////////////Template ends////////////////////////

ll n,k,d,mod=1e9+7;
vector<vector<int>> dp(101,vector<int>(2,-1));
ll ways(ll curr,bool isd){
    if(curr>n) 
        return 0;
    if(curr == n && isd) 
        return 1;
    if(dp[curr][isd] != -1)
        return dp[curr][isd];
    ll ans = 0;
    FOR(i,1,k+1){
        if(i<d)
            ans = (ans + ways(curr+i,isd))%mod;
        else
            ans = (ans + ways(curr+i,true))%mod;
    }
    return dp[curr][isd] = ans;
}

void solve(ll tc)
{
    //start coding
    cin >> n >> k >> d;
    ll ans = ways(0,false);
    cout << ans <<"\n";
}


////////////////// main function to call test cases//////////////
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t=1,tc=1;
    //cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}






