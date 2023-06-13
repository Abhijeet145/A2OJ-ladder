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
ll n,m,k;
vl vv;
ll ans;
ll util(int k,int i,vvl &dp){
    if(k == 0)
        return 0;
    if(i+m*k>n)
        return -1e14;

    if(dp[k][i] != -1)
        return dp[k][i];

    ll not_take = util(k,i+1,dp);
    ll take = vv[i+m]-vv[i] + util(k-1,i+m,dp);
    
    return dp[k][i] = max(take,not_take);
}

void solve(ll tc)
{
    //start coding
    cin >> n >> m >> k;
    

    vv.resize(n+1,0);
    FOR(i,1,n+1){
        cin >> vv[i];
        vv[i] += vv[i-1];
    }
    vvl dp(k+1,vl(n+1,-1));
    ans = util(k,0,dp);
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






