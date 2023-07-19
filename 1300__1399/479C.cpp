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
    ll n;
    cin >> n;
    vpi a(n);
    f0tn{
        int p,q;
        cin >> p >> q;
        a[i] = {p,q};
    }
    sort(a.B,a.E,[](const pi &p,const pi &q){
        if(p.first == q.first) return p.second < q.second;
        return p.first < q.first;
    });
    int ans = -1;
    for(int i = 0; i < n; i++) {
    if (ans <= a[i].second) {
            ans = a[i].second;
        } else {
            ans = a[i].first;
        }
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