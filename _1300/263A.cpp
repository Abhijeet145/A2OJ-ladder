#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int num;
    int ans=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> num;
            if(num==1)
            {
                ans = abs(i-2)+abs(j-2);
            }
        }
    }
    cout << ans<<"\n";

    return 0;
}