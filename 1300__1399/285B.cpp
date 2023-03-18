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
    int n,s,t;
    cin >> n >> s >> t;

    vi adj[n+1];
    f0tn{
        int num;
        cin >> num;
        adj[i+1].push_back(num);
    }
    
    int ans=-1;
    queue<int> q;
    q.push(s);
    vb vis(n+1,false);
    vis[s] = true;
    int steps = 1;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            int u = q.front(); q.pop();
            for(auto v:adj[u]){
                if(v==t){
                    ans = steps;
                    break;
                }
                if(!vis[v])
                q.push(v);
                vis[v]=true;
            }
            if(ans != -1)break;
        }
        if(ans != -1)break;
        steps++;
    }
    if(s==t) ans = 0;
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