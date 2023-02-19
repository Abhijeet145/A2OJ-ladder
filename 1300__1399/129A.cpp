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
    int n;
    cin >> n;
    int sum = 0;
    int ec = 0;
    FOR(i,0,n){
        int num;
        cin >> num;
        sum+=num;
        if(num%2==0) ec++;
    }
    int ans;
    if(sum%2==0) ans = ec;
    else ans = n-ec;
    cout<< ans<<"\n";
    
    return 0;
}