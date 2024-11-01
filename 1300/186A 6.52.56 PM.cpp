#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    string a,b;
    cin >> a >> b;
    vector<int> fa(26),fb(26);
    for(auto x:a)
        fa[x-'a']++;
    for(auto x:b)
        fb[x-'a']++;
    int diffc = 0;
    string ans="";
    for(int i=0;i<26;i++)
    {
        if(fa[i]!=fb[i])
        {
            ans = "NO";
            break;
        }
    }
    if(ans == "")
    {
        for(int i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            diffc++;
        }
        if(diffc == 2)
        ans = "YES";
        else
        ans = "NO";
    }
    cout << ans <<"\n";

    return 0;
}
