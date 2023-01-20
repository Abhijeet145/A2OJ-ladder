#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n;
    cin >> n;
    vector<pair<int,int>> points;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        points.push_back({x,y});
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        bool left=false,right=false,top=false,bottom=false;
        int x = points[i].first;
        int y = points[i].second;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            int x1 = points[j].first;
            int y1 = points[j].second;
            if(x==x1 && y1<y)
            bottom = true;
            if(x==x1 && y1>y)
            top = true;
            if(y==y1 && x1<x)
            left = true;
            if(y==y1 && x1>x)
            right = true;      
        }
        if(left && right && top && bottom)
        count++;
    }
    cout << count<<"\n";
    return 0;
}