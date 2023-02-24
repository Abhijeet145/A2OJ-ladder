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
 
string getSum(string n){
    int sum = 0;
    for(int i=0;i<n.length();i++){
        sum += n[i]-'0';
    }
    n = to_string(sum);
    return n;
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

    string n;
    cin >> n;
    int count = 0;
    while(n.length()>1){
        n = getSum(n);
        count++;
    }
    cout << count<<"\n";
    return 0;
}