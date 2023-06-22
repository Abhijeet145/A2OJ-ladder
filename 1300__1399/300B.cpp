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
ll n ,m;
vector<int> g[50];
void dfs(int u,vi &vis,vi &vec){
    vec.PB(u);
    vis[u]=1;
    for(auto v:g[u]){
        if(!vis[v])
            dfs(v,vis,vec);
    }
}
void solve(ll tc)
{
    cin >> n>>m;
    //vector<int> g[n+1];
    set<int> par;
    FOR(i,0,m){
        int a,b;
        cin >> a >> b;
        par.insert(a);
        par.insert(b);
        g[a].PB(b);
        g[b].PB(a);
    }
    int ans = 0;
    vi vis(50,0);
    vvi v1,v2,v3;
    for(auto i :par){
        vi c;
        if(!vis[i]){
            dfs(i,vis,c);
        }
        
        if(c.size()>3){
            ans = -1;
            break;
        } 
        if(c.size()==3){
            v3.PB(c);
        } 
        if(c.size()==2){
            v2.PB(c);
        } 
        if(c.size()==1){
            v1.PB(c);
        }
    }
    int num = 1;
    
    if((v1.size()+(n-par.size()))<v2.size()){
        ans = -1;
    }
    
    if(ans==-1){
        cout << -1 <<"\n";
    } else {
        for(int i=v1.size();i<v2.size();i++){
            while(true){
                if(par.find(num)==par.end()){
                    v1.PB({num});
                    par.insert(num);
                    num++;
                    break;
                }
                num++;
            }   
        }
        for(auto x:v3){
            for(auto a:x){
                cout << a<<" ";
            }cout <<"\n";
        }
        for(int i=0;i<v1.size();i++){
            for(auto x:v1[i]){
                cout << x<<" ";
            }
            for(auto x:v2[i]){
                cout << x<<" ";
            }cout<<"\n";
        }
        int curr = par.size();
        
        while(curr<n){
            int c = 0;
            while(c<3){
                if(par.find(num)==par.end()){
                    c++;curr++;
                    cout << num<<" ";
                }
                num++;
            }
            cout <<"\n";
        }
    }
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




  