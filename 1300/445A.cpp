#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> grid(n,"");
    for(int i=0;i<n;i++)
        cin >> grid[i];
    
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.')
            {
                if((i+j)%2==0)
                cout << "B";
                else
                cout <<"W";
            }
            else
            cout << "-";
        }
        cout << "\n";
    }
    return 0;
}