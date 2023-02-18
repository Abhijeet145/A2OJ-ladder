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
#define FOR(i,a,b) for(ll i = a;i <= b; i++)

////////////////////////Template ends////////////////////////


////////////////// main function to call test cases//////////////
int main()
{
    int n;
    cin >> n;
    n-=10;
    int ans = 0;
    if(n>=1 && n<=9) ans = 4;
    else if(n==10) ans = 15;
    else if(n==11) ans = 4;
    cout << ans<<"\n";
    return 0;
}