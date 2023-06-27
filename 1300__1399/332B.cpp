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
    ll n,k;
    cin >> n >> k;

    vl v(n+1);
    FOR(i,1,n+1){
        ll x;
        cin >> x;
        v[i] = v[i-1]+x;
    }
    ll bmax=0,curra,currb,maxi=0;
    ll a,b,b_;
    for(int i = n-2*k+1;i>=1;--i){
        curra = v[i+k-1] - v[i-1];
        currb = v[i+2*k-1] - v[i+k-1];
         if(currb >= bmax){
            bmax = currb;
            b_ = i+k;
        }
        if(curra + bmax >= maxi){
            maxi = curra+bmax;
            a = i;
            b = b_;
        }
       
    }
    
    cout << a <<" "<<b <<"\n";   
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