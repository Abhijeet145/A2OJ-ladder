#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
#define v_int vector<int>
#define v_bool vector<bool>
#define v_long vector<ll>

int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    f0tn{
        cin >> v[i];
    }
    set<int> s;
    vector<int> dp(n);
    for(int i= n-1;i>=0;i--)
    {
        s.insert(v[i]);
        dp[i] = s.size();
    }
    for(int i=0;i<m;i++)
    {
        int num;
        cin >> num;
        cout << dp[num-1]<<"\n";
    }
    
    return 0;
}


 