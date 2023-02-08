#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,i,p,t,k;
    map<int,int> mp;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>p>>t;
		mp[p*50-t]++;
	}
    int rank = 0,ans;
    for(auto x:mp)
    {
        rank += x.second;
        if(rank >n - k)
        {
            ans = x.second;
            break;
        }
    }
		
	cout<<ans<<endl;
    return 0;
}
