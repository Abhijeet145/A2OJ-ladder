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
    string a,b;
    cin >> a >> b;

    string ans=solution(a,b);
    cout << ans <<"\n";
    
    return 0;
}