#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> vec(m);
    for(int i=0;i<m;i++)
    cin >> vec[i];
    sort(vec.begin(),vec.end());
    int ans = INT_MAX;
    int a = n-1;
    for(int i=a;i<m;i++)
    ans = min(ans,vec[i]-vec[i-n+1]);
    
    cout << ans<<"\n";
    return 0;
}