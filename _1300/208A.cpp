#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    s+="WUB";
    //string ans="";
    string curr = "";
    for(int i = 0;i<s.length()-2;i++)
    {
        
        if(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B')
        {
            i = i+2;
            if(curr!="")
            {
                cout << curr <<" ";
                curr = "";
            }
            continue;
        }
        curr += s[i];
    }
    cout <<"\n";
    return 0;
}