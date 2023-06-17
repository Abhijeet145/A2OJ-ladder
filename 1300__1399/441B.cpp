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
   ll n,v;
   cin>>n>>v;
   map<ll,ll> mp;
   f0tn{
    ll a,b;
    cin>> a >> b;
    mp[a]+=b;
   }
   ll curr = 1;
   ll prev = 0;
   ll res = 0;
   for(auto x:mp){
    ll day = x.first;
    ll amount = x.second;
    if(curr==day){
        res += min(prev,v);
        if(prev < v){
            res += min((v-prev),amount);
            if(amount > (v-prev)){
                prev = amount - (v-prev);
            }else{
                prev = 0;
            }
        } else {
            prev = amount;
        }
    } else {
        res += min(prev,v);//previous day
        res += min(amount,v);//today work
        if(amount>v)
            prev = amount-v;
        else
            prev = 0;
        curr = day;
    }
    ++curr;
   }
   res += min(prev,v);
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






