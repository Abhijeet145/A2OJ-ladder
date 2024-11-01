#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int curr=0,ans=0;

    for(int i=0;i<n;i++)
    {
        int exit,enter;
        cin >> exit >> enter;
        curr = curr - exit + enter;
        ans = max(ans,curr);
    }
    cout << ans <<"\n";
    return 0;
}