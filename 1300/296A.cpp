#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    int n;
    cin >> n;
    map<int,int> mp;
    int h=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        mp[num]++;
        h = max(h,mp[num]);
    }
    string ans = "NO";
    if((n%2==0 && h<=n/2) || (n%2!=0 && h<= (n/2+1)))
    ans = "YES";
     
    cout << ans <<"\n";

    return 0;
}
