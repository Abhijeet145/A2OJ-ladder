#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<bool> v(d+1,true);
    if(v[k])
    {
        for(int i=k;i<=d;i+=k)
        v[i]=false;
    }
    if(v[l])
    {
        for(int i=l;i<=d;i+=l)
        v[i]=false;
    }
    if(v[m])
    {
        for(int i=m;i<=d;i+=m)
        v[i]=false;
    }
    if(v[n])
    {
        for(int i=n;i<=d;i+=n)
        v[i]=false;
    }
    int count = 0;//count of unharmed dragons
    for(int i=1;i<=d;i++)
        if(v[i])
        count++;
    cout << d - count;
    return 0;
}