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

////////////////////////Template ends////////////////////////


////////////////// main function to call test cases//////////////
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,k;
    cin >> n >> k;
    ll ans = -1e12;
    ll f,t;
    FOR(i,0,n){
        cin >> f >>t;
        if(t<=k)
            ans = max(ans,f);
        else
            ans = max(ans,f-(t-k));
    }
    cout << ans <<"\n";
    return 0;
}