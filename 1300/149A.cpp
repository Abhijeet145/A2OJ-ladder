#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int k;
    cin >> k;
    vector<int> arr(12);
    for(int i=0;i<12;i++)
    cin >> arr[i];
    int s;
    sort(arr.rbegin(),arr.rend());
    int ans = 0;
    int count = 0;
    for(int i=0;i<12;i++)
    {
        if(count >= k)
        break;
        count += arr[i];
        ans++;
    }
    if(count <k)
    ans = -1;
    cout << ans<<"\n";
    return 0;
}