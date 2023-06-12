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


int S(ll x){
    int sum = 0;
    while(x>0){
        sum += x%10;
        x/=10;
    }
    return sum;
}

void solve(ll tc)
{
    //start coding
    
    ll a,b,c;
    cin >> a >> b >> c;
    vi v;
    FOR(i,1,82){
        ll x = b * pow(i,a) + c;
        if(x>=1e9 || x<=0 || S(x) != i)  continue;
        v.PB(x);
    }
    cout << v.size()<<"\n";
    for(auto x:v){
        cout << x <<" ";
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