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
    ll n,m;
    cin >> n >> m;
    vector<bool> isPrime(1e6,true);
    for(int i=2;i*i<1e6;i++){
        if(isPrime[i]){
            for(int j=i*i;j<1e6;j+=i){
                isPrime[j]=false;
            }
        }
    }
    vi primes;
    FOR(i,2,1e6){
        if(isPrime[i]){
            primes.PB(i);
        }
    }
    vvi v(n,vi(m));
    ll ans = 1e9;
    f0tn{
        ll curr = 0;
        FOR(j,0,m){
            int x;
            cin >> x;
            x = *lower_bound(primes.B,primes.E,x) - x;
            v[i][j] = x;
            curr += x;
        }
        ans = min(ans,curr);
    }
    FOR(j,0,m){
        ll curr = 0;
        f0tn{
            curr += v[i][j];
        }
        ans = min(ans,curr);
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