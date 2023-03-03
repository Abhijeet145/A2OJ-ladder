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

    int x,y,z;
    cin >> x >> y ;
    z = x+y;
    string a=to_string(x),b=to_string(y),c=to_string(z),r="",s="",t="";

    int p=0,q=0,g=0;
    
    for(auto x:a){
        if(x!='0')
            r+=x;
    }
    for(auto x:b){
        if(x!='0')
            s+=x;
    }
    for(auto x:c){
        if(x!='0')
            t+=x;
    }
    p = stoi(r);
    q = stoi(s);
    g = stoi(t);
    string ans = "NO";
    if(p+q == g)
        ans = "YES";

    cout << ans <<"\n";


    return 0;
}