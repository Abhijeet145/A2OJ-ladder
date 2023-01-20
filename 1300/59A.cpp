#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    string s;
    cin >> s;
    int uc=0,lc=0;
    for(auto x:s)
    {
        if(x>=97)
        lc++;
        else
        uc++;
    }
    
    if(lc>=uc)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97)
            continue;
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97)
            s[i] = toupper(s[i]);
        }
    }
    cout << s<<"\n";
    return 0;
}