#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string left="",right="";
    n = 2*n;
    f0tn
    {
        if(i<n/2)
        left += s[i];
        else
        right += s[i];
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    int  a = 0,b= 0;
    for(int i=0;i<n/2;i++)
    {
        if(left[i]>right[i])
        a++;
        if(left[i]<right[i])
        b++;
    }
    string ans = "NO";
    if(a == n/2 || b==n/2) ans = "YES";
    
    cout << ans <<"\n";

    return 0;
}
