#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int l = -1, r = -1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            l = i;
            break;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(arr[i-1] > arr[i])
        {
            r = i;
            break;
        }
    }
    string ans = "yes";
    if(l!=-1 && r!= -1)
    reverse(arr.begin()+l,arr.begin()+r+1);
    for(int i = 0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            ans = "no";
            break;
        }
    }
    if(ans == "yes")
    {
        if(l==-1)
        l = 0;
        if(r==-1)
        r = 0;
        cout << ans<<"\n"<<l+1<<" "<<r+1<<"\n";
        
    }
    else
    cout << ans<<"\n";
    return 0;
}