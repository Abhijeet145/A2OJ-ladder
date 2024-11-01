#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    string ans = "NO";
    for(auto x:s)
    {
        if(x=='H'||x=='Q'||x=='9')
        {
            ans = "YES";
            break;
        }
    }
    cout << ans <<"\n";
    return 0;
}