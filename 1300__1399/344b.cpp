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
    vpi v(3);
    cin >> v[0].F >>v[1].F>>v[2].F;
    v[0].second = 0;
    v[1].second = 1;
    v[2].second = 2;

    sort(v.rbegin(),v.rend());

    if((v[1].F+v[2].F<v[0].F) || (v[1].F+v[2].F - v[0].F)%2){
        cout <<"Impossible\n";
    } else {
        // for(int i=0;i<3;i++){
        //     cout << v[i].first<<"-"<<v[i].S <<" ";
        // }
        vi a(4);
        int k = (v[1].F + v[2].F - v[0].F)/2;
        a[v[1].S + v[2].S] = k;
        a[v[1].S + v[0].S] = v[1].F - k;
        a[v[2].S + v[0].S] = v[2].F - k;
        
        cout << a[1] <<" "<<a[3]<<" "<<a[2]<<"\n";
        
    }
    
    // int ans;
    // cout <<ans <<"\n";
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

    ll t = 1,tc = 1;
    //cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}