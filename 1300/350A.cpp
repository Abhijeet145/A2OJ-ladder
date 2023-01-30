#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    int m,n;
    cin >> m >> n;
    int a_min=101,a_max = 0,b_min=101;
    for(int i=0;i<m;i++)
    {
        int num;
        cin >> num;
        a_min = min(a_min,num);
        a_max = max(a_max,num);
    }
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        b_min = min(b_min,num);
    }
    int ans = -1;
    if(a_max < b_min && 2*a_min < b_min)
        ans = max(2*a_min , a_max);
    cout << ans <<"\n";

    return 0;
}
