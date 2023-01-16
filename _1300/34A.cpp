#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n;
    cin >> n;
    int arr[n];
    int mini = 1e6;
    pair<int,int> ans;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(i==0)
        continue;
        if(abs(arr[i]-arr[i-1]) < mini)
        {
            mini = abs(arr[i]-arr[i-1]);
            ans = {i ,i+1};
        }
    }
    if(abs(arr[0]-arr[n-1]) < mini)
    {
        mini = abs(arr[0]-arr[n-1]);
        ans = {n,1};
    }
    cout << ans.first << " " << ans.second <<"\n";
    return 0;
}