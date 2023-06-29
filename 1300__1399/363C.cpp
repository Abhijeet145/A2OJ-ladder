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
    string s;
    cin >> s;

    string a="";
    for(int i=0;i<s.size();i++){
        if(i>=2 && s[i]==s[i-1] && s[i]==s[i-2]){
            continue;
        }else{
            a += s[i];
        }
    }
    string b="";
    b+=a[0];
    bool prev = false;
    int pointer = 0;
    for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1]){
            pointer = 0;
            if(prev == true){
                pointer = 1;
                prev = false;
                continue;
            }else{
                b+=a[i];
                prev = true;
            }
        }else{
            pointer++;
            if(pointer == 2){
                prev = false;
                pointer = 0;
            }
            b += a[i];
        }
    }
    cout << b<<"\n";   
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