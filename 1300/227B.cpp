#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n+1,-1);
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        arr[num]=i;
    }
    int m;
    cin >> m;
    ll vasya=0,petya=0;
    for(int i=0;i<m;i++)
    {
        int num;
        cin >> num;
        vasya += arr[num]+1;
        petya += n - arr[num];
    }
    cout << vasya<<" " <<petya<<"\n";
    return 0;
}