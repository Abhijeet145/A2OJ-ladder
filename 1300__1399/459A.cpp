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
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(ll i = a;i < b; i++)
#define f0tn for(int i=0;i<n;i++)



////////////////////////Template ends////////////////////////
void solve(ll tc)
{
    //start coding here
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1==x2){
        int side =abs( y2-y1);
        cout << x1+side<<" "<<y1<<" "<<x2+side<<" "<<y2<<"\n";
    } else if(y1==y2){
        int side =abs( x2-x1);
        cout << x1<<" "<<y1+side<<" "<<x2<<" "<<y2+side<<"\n";
    } else if(abs(x1-x2)==abs(y1-y2)){
        int side = abs(x1-x2);
        cout << x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
    } else{
        cout <<-1<<"\n";
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