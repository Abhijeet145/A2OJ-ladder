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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 202;
    vector<string> b,common;
    set<string> a;
    f0tn{
        string temp;
        getline(cin,temp);
        if(i>=1 && i<=100)
            a.insert(temp);
        if(i>=103 && i<=202)
            b.push_back(temp);
    }
    
    for(auto x:b){
        if(a.find(x)!=a.end())
            common.PB(x);
    }
    
    sort(common.begin(),common.end());

    for(auto x:common)
    cout << x<<"\n";
    return 0;
}