#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int arr[3][3];
    int ans[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
            ans[i][j]=1;
        }
    }
    int dx[]={1,-1,0,0};
    int dy[] = {0,0,1,-1};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]%2)
            {
                ans[i][j]^=1;
                for(int ind=0;ind<4;ind++)
                {
                    int new_x = i+dx[ind];
                    int new_y = j+dy[ind];
                    if(new_x>=0 && new_y>=0 && new_x<3 && new_y<3)
                    {
                        ans[new_x][new_y]^=1;
                    }
                }
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cout << ans[i][j];
        cout <<"\n";
    }
    return 0;
}