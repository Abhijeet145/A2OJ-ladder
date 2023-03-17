#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;

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




void solve(ll tc)
{
    //start coding here
    int n,m;
    cin >> n >> m;

    
    vpi v(n+1);
    FOR(i,1,n+1){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.B,v.E);
    vvi mat(n+1,vi(n+1,-1));
    FOR(i,0,m){
        int a,b;
        cin >> a >> b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    ll ans = 0;
    for(auto x:v){
        int u = x.second;
        int val = x.first;
        FOR(i,1,n+1){
            if(mat[u][i]!=-1){
                ans += val;
                mat[u][i]=-1;
                mat[i][u]=-1;
            }
        }
    }

    cout <<ans <<"\n";
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