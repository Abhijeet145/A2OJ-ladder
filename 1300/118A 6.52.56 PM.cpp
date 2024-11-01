#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    unordered_set<char> vowels({'A', 'O','Y', 'E', 'U', 'I','a','o','y','e','u','i'});
    string ans="";
    for(auto x:s)
    {
        if(vowels.find(x)!=vowels.end())
            continue;
        ans += ".";
        ans += tolower(x);
    }
    cout <<ans<<"\n";
    return 0;
}