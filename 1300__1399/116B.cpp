#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;

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
    cin >> n>>m;
    vector<string> v(n);
    f0tn
        cin >> v[i];
    
    int ans=0;
    int dx[]={1,-1,0,0};
    int dy[]={0,0,-1,1};
    FOR(i,0,n){
        FOR(j,0,m){
            if(v[i][j]=='W')
                FOR(p,0,4){
                    int x=i+dx[p];
                    int y=j+dy[p];
                    if(x>=0 && x<n && y>=0 && y<m && v[x][y]=='P'){
                        ans++;
                        v[x][y] = '.';
                        break;
                    }
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