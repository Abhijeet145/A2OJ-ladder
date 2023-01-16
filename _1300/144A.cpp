#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int max = 0;
    int min = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        max = i;
        if(arr[i]<=arr[min])
        min = i;
    }
    int ans = max + n - 1 - min;
    if(min<max)
    ans--;
    cout << ans <<"\n";
    return 0;
}