#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll n,k;
    cin >> n>>k;
    ll odd = n%2==0?n/2:n/2+1,even = n/2;
    ll ans;
    if(k<=odd)
    ans = 2*k-1;
    else
    {
        k -= odd;
        ans = 2*k;
    }
    cout << ans <<"\n";
    return 0;
}