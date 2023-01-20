#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s,ans="";
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        ans+="0";
        else
        {
            i++;
            if(s[i]=='.')
            ans+="1";
            else
            ans+="2";
        }
    }
    cout << ans<<"\n";
    return 0;
}