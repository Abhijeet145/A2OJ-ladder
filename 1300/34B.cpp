#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;
    cin >> n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    cin >> vec[i];
    sort(vec.begin(),vec.end());
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(vec[i]>0)
        break;
        ans += vec[i];
    }
    
    return 0;
}