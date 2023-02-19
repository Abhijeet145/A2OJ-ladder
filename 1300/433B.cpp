#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
#define v_int vector<int>

int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
	cin >> n;
	vector<long long> v(n);
	f0tn{
		cin >> v[i];
	}
	vector<long long> presum(n+1,0);
	for(int i=1;i<=n;i++)
	presum[i] = presum[i-1] + v[i-1];
	sort(v.begin(),v.end());
	vector<long long> presum2(n+1,0);
	for(int i=1;i<=n;i++)
	presum2[i] = presum2[i-1] + v[i-1];
	cin >> n;
	f0tn{
		int a,b,c;
		cin >> a >> b >> c;
		if(a==1) cout << presum[c]-presum[b-1]<<"\n";
		else cout << presum2[c]-presum2[b-1]<<"\n";
	}
    return 0;
}


 