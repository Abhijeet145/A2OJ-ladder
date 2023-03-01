#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;

//Macros (they replace the words with exact code so be careful while using them)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(ll i = a;i < b; i++)
#define f0tn for(int i=0;i<n;i++)




////////////////////////Template ends////////////////////////
void solve(ll tc)
{
    //start coding here
    int a;
    cin >> a;
    string ans = "NO";
    if(360%(180-a)==0)
    ans = "YES";
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

    ll t,tc=1;
    cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}