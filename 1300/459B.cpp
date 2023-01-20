#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> num(n);
    ll mini =INT_MAX,maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
        mini = min(mini,num[i]);
        maxi = max(maxi,num[i]);
    }
    ll a = 0,b=0,ans;
    if(mini == maxi)
        ans = n*(n-1)/2;
    else
    {
        for(auto x:num)
        {
            if(x==mini)
            a++;
            if(x==maxi)
            b++;
        }
        ans = a*b;
    }
    cout << maxi - mini << " "<<ans <<"\n";
    
    return 0;
}