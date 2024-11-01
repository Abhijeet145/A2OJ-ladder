#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    string temp;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        if(temp[0]!='X')
        {
            if(temp[0]=='+')
            ans+=1;
            else
            ans-=1;
        }
        else
        {
            if(temp[1]=='+')
            ans+=1;
            else
            ans-=1;
        }
    } 
    cout << ans <<"\n";
    return 0;
}