#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int l0=0,l1=0,r0=0,r1=0;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin >> l >> r;
        if(l==0)
        l0++;
        else
        l1++;
        if(r==0)
        r0++;
        else
        r1++;
    }
    int ans = min(l0,l1) + min(r0,r1);
    cout << ans ;
    return 0;
}