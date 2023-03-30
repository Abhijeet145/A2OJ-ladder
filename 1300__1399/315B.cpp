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
    int n,m;
    cin >> n >> m;
    vl a(n+1);
    f0tn{
        cin >> a[i+1];
    }   
    ll inc = 0;
    FOR(i,0,m){
        int f;
        cin >> f;
        if(f==2){
            ll temp;
            cin >> temp;
            inc += temp;
        } else if(f==3){
            int ind;
            cin >> ind;
            cout << a[ind]+inc<<"\n";
        } else if(f==1){
            ll ind,val;
            cin >> ind >> val;
            a[ind] = val - inc;
        }
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