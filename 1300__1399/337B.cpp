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
   ll a,b,c,d;
   cin >> a >> b >> c >> d;
   int num,den,gcd=1;
   if(a*1.0/b < c*1.0/d){
    num = b*c - a*d;
    den = b*c;
    gcd = __gcd(num,den);
   } else if(a*1.0/b > c*1.0/d){
    num = a*d - b*c;
    den = a*d;
    gcd = __gcd(num,den);
   } else {
    num = 0;
    den = 1;
   }
   num /= gcd;
   den /= gcd;
   cout << num <<"/"<<den<<"\n";
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






