#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int ans = min(n-a,b+1);

    cout <<ans<<"\n";
    return 0;
}