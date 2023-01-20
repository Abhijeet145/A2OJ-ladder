#include<bits/stdc++.h>
using namespace std;
#define ll long long
string solution(string a, string b)
{
    if(a.length()!=b.length())
    return "NO";
    int n = a.length();
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[n-i-1])
        return "NO";
    }
    return "YES";
}
int main()
{
    int n;
    cin >> n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int num=0;
    string ans;
    for(auto x:mp)
    {
        if(x.second > num)
        ans = x.first;
        num = x.second;
    }
    cout << ans <<"\n";
    
    return 0;
}