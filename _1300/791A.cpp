#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a,b;
    cin >> a >>b;
    int ans = 0;
    while(1)
    {
        if(a>b)
        break;
        a = a*3;
        b = b*2;
        ans++;
    }
    cout << ans<<"\n";
    return 0;
}