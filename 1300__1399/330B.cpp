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
    ll n,m;
    cin >> n >> m;
    set<int> s;
    FOR(i,0,m){
        int a,b;
        cin >> a >> b;
        s.insert(a);
        s.insert(b);
    }
    int cn;
    FOR(i,1,n+1){
        if(s.find(i)==s.end()){
            cn = i;
            break;
        }
    }
    cout << n-1<<"\n";
    FOR(i,1,n+1){
        if(i==cn) continue;
        cout << i <<" "<<cn<<"\n";
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