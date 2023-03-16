#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef pair<int,int> pi;
typedef vector<pi> vpi;

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

void dfs(vi adj[],vb &vis,int u){
    vis[u] = true;
    for(auto v:adj[u]){
        if(!vis[v])
        dfs(adj,vis,v);
    }
}

void solve(ll tc)
{
    //start coding here
    int n,m,c=0;
    cin >> n >> m;
    vi adj[n+m];
    f0tn{
        int k;
        cin >> k;
        if(k==0) c++;
        FOR(j,0,k){
            int lan;
            cin >> lan;
            adj[i].PB(lan+n-1);
            adj[lan+n-1].PB(i);
        }
    } 
    int ans = n;
    
    if(c!=n){//get the number of connected components
        int count = 0;
        vb visited(n+m,false);
        f0tn{
            if(!visited[i]){
                count++;
                dfs(adj,visited,i);
            }
        }
        ans = count-1;
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