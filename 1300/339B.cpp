#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n ,m;
    cin >> n >> m;
    ll ans=0,curr=0;
    for(int i=0;i<m;i++)
    {
        ll num;
        cin >> num;
        if((num-1)>=curr)
        {
            ans+=num-1-curr;
            curr = num-1;
        }
        else
        {
            ans+=n-curr+num -1;
            curr = num -1;
        }
    }
    cout << ans <<"\n";
    return 0;
}