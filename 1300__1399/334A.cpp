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
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int sum = n*n+1;
    int i = 1;
    for(int k=1;k<=n;k++){
        for(int j=1;j<=n/2;j++)
            cout << i <<" "<<sum-i++<<" ";
        cout << "\n";
    }
    return 0;
}