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
 

////////////////// main function to call test cases//////////////
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r,c;
    cin >> r>>c;
    vector<string> v(r);
    FOR(i,0,r){
        cin >> v[i];
    }
    int ans = 0,rc=0;
    FOR(i,0,r){
        bool evil = false;
        FOR(j,0,c){
            if(v[i][j]=='S'){
                evil = true;
                break;
            }
        }
        if(!evil)
            rc++;
    }
    ans = rc*c;
    FOR(j,0,c){
        bool evil = false;
        FOR(i,0,r){
            if(v[i][j]=='S'){
                evil = true;
                break;
            }
        }
        if(!evil)
            ans += r - rc;
    }
    cout << ans <<"\n";
    return 0;
}