#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
int util(int n,int &a,int &b,int &c,vector<int> &dp)
{
   
    if(n==0)
       return 1;
    if(dp[n]!=-1)
        return dp[n];
    int curr = 0;
    if(n>=a)
        curr = max(curr,util(n-a,a,b,c,dp));
    if(n>=b)
        curr = max(curr,util(n-b,a,b,c,dp));
    if(n>=c)
        curr = max(curr,util(n-c,a,b,c,dp));
 
    if(curr == 0) return dp[n] = 0;
    return dp[n] = curr + 1;
}
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n+1,-1);
    int ans = util(n,a,b,c,dp) - 1;
	cout<<ans<<endl;
    return 0;
}
