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
ll n,mx=1e11;
void util(ll num,int c){
    if(num>1e11) return;

    if(num>=n && c==0)
        mx = min(mx,num);

    util(num*10+4,c+1);
    util(num*10+7,c-1);
}

void solve(ll tc)
{
    cin >> n;
    util(0,0);
    cout << mx<<"\n";
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






// #include <iostream>
// using namespace std;
// typedef long long ll;
// ll n,mn=1e11;
// void rec(ll x, ll c){
// if(x>1e11) return;
// if(x>=n && c==0) mn=min(mn,x);
 
// rec(x*10+4,c+1);
// rec(x*10+7,c-1);
// }
  
// int main() {
// cin>>n;
// rec(0,0);
// cout<<mn;
// }