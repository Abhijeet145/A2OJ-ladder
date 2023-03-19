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
    int n,k;
    cin >> n >> k;
    vi v(n);
    f0tn{
        cin >> v[i];
    }
    sort(v.B,v.E);
    int i=0;
    while(i<n && k>0){
        if(v[i]<0) v[i] = v[i]*-1;
        else break;
        i++;
        k--;
    }
    sort(v.B,v.E);
    bool flag = false;
    if(k>0 && k%2) flag = true;

    ll ans=0;
    f0tn{
        ans += v[i];
    }
    if(flag) ans -= 2*v[0];
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