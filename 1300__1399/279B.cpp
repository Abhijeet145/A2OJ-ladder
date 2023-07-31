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
// sort(v.begin(), v.end(),
//             [](const pair &x, const pair &y) {
//                 // compare the second value
//                 if (x.second != y.second) {
//                     return x.second < y.second;
//                 }
 
//                 // compare first only if the second value is equal
//                 return x.first < y.first;
//             });

void solve(ll tc)
{
    ll n , t;
    cin >> n >> t;
    vl v(n+1);
    FOR(i,1,n+1){
        int x;
        cin >> x;
        v[i] = v[i-1]+x;
    }
    ll ans = 0;
    FOR(i,0,n+1){
        ll num = v[i] + t;
        ll curr = upper_bound(v.B,v.E,num) - v.B - i - 1;
        ans = max(ans,curr);
    }
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