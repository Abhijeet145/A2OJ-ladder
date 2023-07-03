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
    ll n;
    cin >> n;
    // vl a(n),g(n);
    ll a,g;
    string ans = "";
    ll as=0,gs=0;
    f0tn{
        cin >> a >> g;
        as += a;
        if(abs(as-gs)<=500){
            ans += "A";
        }else{
            as -= a;
            gs +=g;
            if(abs(as-gs)>500){
                ans = "-1";
                break;
            }else{
                ans += "G";
            }
        }
    }   
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