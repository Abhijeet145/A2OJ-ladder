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
    //start coding
   ll a,b;
   cin >> a >> b;
   ll res = 0;
   ll a2=0,a3=0,a5=0,b2=0,b3=0,b5=0;
   while(a>0&&a%2==0){
        a/=2;
        ++a2;
   }
   while(a>0&&a%3==0){
        a/=3;
        ++a3;
   }
   while(a>0&&a%5==0){
        a/=5;
        ++a5;
   }
   while(a>0&&b%2==0){
        b/=2;
        ++b2;
   }
   while(a>0&&b%3==0){
        b/=3;
        ++b3;
   }
   while(a>0&&b%5==0){
        b/=5;
        ++b5;
   }
   if(a!=b){
    res = -1;
   }else{
    res = abs(a2-b2) + abs(a3-b3) + abs(a5-b5);
   }
   cout << res<<"\n";
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






