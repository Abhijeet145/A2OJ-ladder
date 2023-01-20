#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll util(ll a, ll b, ll n)
{
    ll temp = a;
    for(int i=0;i<10;i++)
    {
        temp = a*10 + i;
        if(temp%b==0)
        {
            return temp;
        }
    }
    return -1;
}

int main()
{
    ll a,b,n;
    cin >> a >> b >> n;
    string ans;

    if(util(a,b,n)==-1)
    ans = "-1";
    else
    {
        ans = to_string(util(a,b,n));
        while(n>1)
        {
            n--;
            ans+="0";
        }
    }
    cout << ans <<"\n";
    return 0;
}