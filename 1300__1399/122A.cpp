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

    int n;
    cin >> n;
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    string ans = "NO";
    FOR(i,0,14){
        if(arr[i]==n || n%arr[i]==0){
            ans = "YES";
            break;
        }
    }
    cout << ans <<"\n";


    return 0;
}