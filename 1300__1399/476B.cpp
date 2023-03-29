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
    //start coding here
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.length();
    
    int answerPosition = 0 ;//where we should actually reach 
    f0tn{
        answerPosition += (s1[i]=='+'?1:-1) ;
    }
        
    int finalPosition = 0 ;//where we reached by following received message
    int moves = 0 ; //number of '?'
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='?')
            moves++ ;
        else
            finalPosition += (s2[i]=='+'?1:-1) ;
    }
 
    int distance = answerPosition-finalPosition ;
    double ans ;
    if((distance+moves)%2!=0 || moves<abs(distance)) //can't reach the destination no matter how
        ans = 0 ;
    else
    {
        int m = (moves+abs(distance))/2 ; //moves needed toward the distance m is abs(distance)+(moves-abs(distance))/2
        //answer is C(moves,m)/(1<<moves)
        int c = 1 ;
        for(int i=0;i<m;i++)
            c *= moves-i ;
        for(int i=2;i<=m;i++)
            c /= i ;
        ans = (double)c/(1<<moves) ;
    }
 
    printf("%.12f\n", ans) ;
    
    //cout <<ans <<"\n";
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