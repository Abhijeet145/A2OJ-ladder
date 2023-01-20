#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i=0;i<a.length();i++)
    {
        char c = tolower(a[i]),d=tolower(b[i]);
        
        if(c==d)
        continue;
        if(c<d)
        ans = -1;
        else
        ans = 1;
        break;
    }
    cout << ans <<"\n";
    return 0;
}