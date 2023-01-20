#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    vector<string> grid(4);
    for(int i = 0;i<4;i++)
        cin >> grid[i];
    string ans = "NO";
    bool flag = false;
    for(int i = 0;i<3;i++)
    {
        if(flag) break;
        for(int j=0;j<3;j++)
        {
            int count = 0;
            if(grid[i][j]=='#')
            count++;
            if(grid[i][j+1] == '#')
            count++;
            if(grid[i+1][j]=='#')
            count++;
            if(grid[i+1][j+1] == '#')
            count++;
            if(count != 2)
            {
                ans = "YES";
                flag = true;
                break;
            }
        }
    }
    cout << ans <<"\n";

    return 0;
}
