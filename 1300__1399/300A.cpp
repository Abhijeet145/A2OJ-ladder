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
    int n ;
    cin>>n;
    vi v(n);
    f0tn{
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << 1 <<" "<< v[0] <<"\n";

    if(v[n-1]>0){
        cout << 1<<" " << v[n-1] <<"\n";
        cout << n-2<<" ";
        FOR(i,1,n-1){
            cout << v[i] <<" ";
        }
        cout << "\n";
        
    }
    else {
        cout << 2<<" " << v[1] <<" "<<v[2]<<"\n";
        cout << n-3<<" ";
        FOR(i,3,n){
            cout << v[i] <<" ";
        }
        cout << "\n";
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