#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    int count = 1;
    string ans = "NO";
    for(int i=0;i<s.length();i++)
    {
        if(s[i-1]==s[i])
        {
            count++;
            if(count == 7)
            {
                ans = "YES";
                break;
            }
        }
        else
        count = 1;
    }

    cout <<ans<<"\n";
    return 0;
}