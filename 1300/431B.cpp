#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    vector<vector<ll>> a(5,vector<ll>(5));
    for(int i = 0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        cin >> a[i][j];
    }
    ll ans = 0;

    vector<ll> line;
    for(int i=1;i<=5;i++)
    {
        line.push_back(i);
        for(int b=1;b<=5;b++)
        {
            if(b==i)
            continue;
            line.push_back(b);
            for(int c = 1;c<=5;c++)
            {
                if(c==b || c==i) continue;
                line.push_back(c);
                for(int d = 1;d<=5;d++)
                {
                    if(d==c || d==b || d==i) continue;
                    line.push_back(d);
                    for(int e = 1;e<=5;e++)
                    {
                        if(e==i || e==b || e==c || e==d) continue;
                        
                        line.push_back(e);
                        vector<ll> temp = line;
                        ll curr = 0;
                        while(temp.size()>0)
                        {
                            for(int p = temp.size()-2;p>=0;p-=2)
                                curr += a[temp[p]-1][temp[p+1]-1] + a[temp[p+1]-1][temp[p]-1];
                            temp.pop_back();
                        }
                        ans = max(ans,curr);
                        line.pop_back();
                    }
                    line.pop_back();
                }
                line.pop_back();
            }
            line.pop_back();
        }
        line.pop_back();
    }
    cout << ans <<"\n";

    return 0;
}
