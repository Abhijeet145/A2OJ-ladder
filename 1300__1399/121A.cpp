#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;

//Macros (they replace the words with exact code so be careful while using them)
#define F first
#define S second
#define B begin()
#define E end()
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define FOR(i,a,b) for(ll i = a;i < b; i++)
#define f0tn for(int i=0;i<n;i++)

vl v;
void f(ll x){
    v.PB(x);
    if(x<1e10)
    f(x*10+4),f(x*10+7);
}

////////////////////////Template ends////////////////////////
void solve(ll tc)
{
    //start coding here
    ll l,r;
    cin >> l >> r;
    f(0);
    sort(v.B,v.E);
    ll ans = 0;
    int i = LB(v.B,v.E,l) - v.B;
    do{
        ans += (min(r,v[i]) - l + 1)* v[i];
        l = v[i++]+1;
    }while(v[i-1]<=r);
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