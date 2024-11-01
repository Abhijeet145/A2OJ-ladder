#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    string num = to_string(n);
    string ans="YES";
    int l = num.length();
    for(int i = 0;i < l; i++)
    {
        if(num[i] == '1')
        {
            if(i+1<l && num[i+1]=='4')
            {
                i++;
                if(i+1<l && num[i+1]=='4')
                i++;
            }
        }
        else
        {
            ans="NO";
            break;
        }
    }
    cout << ans <<"\n";
    
    return 0;
}