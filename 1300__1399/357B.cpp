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


void solve(ll tc)
{
    //start coding
   ll n,m;
   cin>>n>>m;
   map<int,int> mp;
   FOR(i,0,m){
    set<int> s;
    vi v(3);
    FOR(j,0,3){
        cin >> v[j];
        if(mp.find(v[j])!=mp.end()){
            s.insert(mp[v[j]]);
        }
    }
    for(auto a:v){
        if(mp.find(a)==mp.end()){
            for(int k=1;k<=3;k++){
                if(s.find(k)==s.end()){
                    s.insert(k);
                    mp[a]=k;
                    break;
                }
            }
        }
    }
        
    
   }
   for(auto x:mp){
    cout << x.second <<" ";
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






