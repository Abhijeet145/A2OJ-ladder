#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    string s;
    cin >> s;
    string ans = "";
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ans = s.substr(0,i);
            if(n-i>1)
            ans += s.substr(i+1,n-i-1);
            break;
        }
    }
    if(ans == "")
    ans = s.substr(0,n-1);
    cout << ans <<"\n";

    return 0;
}
