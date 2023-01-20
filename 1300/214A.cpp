#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;
    cin >> n >> m;
    int num = min(n,m);
    int ans = 0;
    for(int i=0;i<=num;i++)
    {
        for(int j=0;j<=num;j++)
        {
            if((i*i + j) == n && (i + j*j) == m)
            ans++;
        }
    }
    
    cout << ans<<"\n";
    return 0;
}