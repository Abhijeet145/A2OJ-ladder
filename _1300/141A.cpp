#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    int mp[26]={0};
    int mp2[26]={0};

    for(auto x:a)
    mp[x-'A']++;
    for(auto x:b)
    mp[x-'A']++;
    for(auto x:c)
    mp2[x-'A']++;

    string ans = "YES";

    for(int i=0;i<26;i++)
    {
        if(mp[i]!=mp2[i])
        {
            ans = "NO";
            break;
        }
    }
    cout << ans <<"\n";
    return 0;
}