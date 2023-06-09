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
    int n;
    cin >> n;
    vl a(1000000);
    f0tn{
        cin >> a[i+1];
    }

    ll L = 0, w1 = 0, h1 = 0;
    int m;
    cin >> m;
    FOR(i,0,m){
        ll w2,h2;
        cin >> w2>>h2;
        L = max(L+h1, a[w2]);
        cout << L<<"\n";
        w1 = w2;//here w1 and h1 represent the width and height of last block
        h1 = h2; //and L is the last level that was touched
        //now once a level is touched it can no longer be touched again
        //as all the blocks are falling from left 
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