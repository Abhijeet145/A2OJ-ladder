#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n,m;
    cin >> n >> m;
    deque<pair<int,int>> dq;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        dq.push_back({i+1,num});
    }
    int ans = 0;
    while(dq.size()>1)
    {
        pair<int,int> front = dq.front();
        dq.pop_front();
        if(front.second>m)
        {
            dq.push_back({front.first,front.second-m});
        }
    }     
    cout << dq.front().first <<"\n";
    return 0;
}