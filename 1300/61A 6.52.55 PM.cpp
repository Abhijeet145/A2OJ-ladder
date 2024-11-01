#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a,b;
    cin >> a >> b;
    string ans="";
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[i])
        ans+="0";
        else
        ans+="1";
    }
    cout << ans <<"\n";
    return 0;
}