#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    //to raad and write files from text files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m;
    cin >> n >> m;
    if(n>=m)
    {
        for(int i=0;i<m;i++)
        cout<<"BG";
        n -= m;
        m = 0; 
    }
    else
    {
        for(int i=0;i<n;i++)
        cout<<"GB";
        m -= n;
        n = 0;
    }
    while(n>0)
    {
        cout <<"B";
        n--;
    }
    while(m>0)
    {
        cout <<"G";
        m--;
    }
    cout<<"\n";

    return 0;
}
