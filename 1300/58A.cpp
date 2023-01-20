#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    string t = "hello";
    string ans = "NO";
    int j = 0;
    for(auto x:s)
    {
        if(x==t[j])
            j++;
        if(j==5)
        {
            ans = "YES";
            break;
        }
    }
    
    cout << ans<<"\n";
    return 0;
}