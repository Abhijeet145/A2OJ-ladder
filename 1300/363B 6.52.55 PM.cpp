#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    int sum = 0;
    f0tn
        cin >> v[i];
    
    for(int i=0;i<k;i++)
        sum += v[i];

    int ans = 1;
    int min_sum = sum;
    for(int i=k;i<n;i++)
    {
        sum += v[i] - v[i-k];
        if(sum < min_sum)
        {
            ans = i-k+2;
            min_sum = sum;
        }
    }
    
    cout << ans <<"\n";

    return 0;
}
