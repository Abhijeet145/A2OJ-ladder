#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s,ans="";
    cin >> s;
    int c1=0,c2=0,c3=0;
    for(auto x:s)
    {
        if(x=='1')
        c1++;
        if(x=='2')
        c2++;
        if(x=='3')
        c3++;
    }
    while(c1--)
    {
        ans += "1+"; 
    }
    while(c2--)
    {
        ans += "2+";
    }
    while (c3--)
    {
        ans += "3+";
    }
    ans = ans.substr(0,s.length());
    cout << ans <<"\n";
    return 0;
}