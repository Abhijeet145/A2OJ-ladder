#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = k*l;
    int limes = c*d;
    int ar = drinks/(n*nl);
    int cr = p/(n*np);
    int lr = limes/n;
    int ans = min(ar,min(lr,cr));
    cout << ans <<"\n";
    return 0;
}