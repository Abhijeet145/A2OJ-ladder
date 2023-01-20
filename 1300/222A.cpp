#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin >> a[i];
    int ans = -1;
    bool flag = true;
    int knum = a[k-1];
    for(int i = k; i < n; i++)
    {
        if(a[i]!=knum)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        int count = 0;
        for(int i = k-2;i>=0;i--)
        {
            if(a[i] == knum)
            count++;
            else
            break;
        }
        ans = k-1-count;
    }
    cout << ans <<"\n";

    return 0;
}
