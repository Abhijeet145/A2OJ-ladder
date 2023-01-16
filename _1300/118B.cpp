#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        for(int j = i;j<n;j++)
        cout << "  ";
        cout << 0;
        for(int j = 1;j<=i;j++)
        cout << " "<<j;
        for(int j = i-1;j>=0;j--)
        cout << " " << j;
        cout <<"\n";
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j = i;j<n;j++)
        cout << "  ";
        cout << 0;
        for(int j = 1;j<=i;j++)
        cout << " "<<j;
        for(int j = i-1;j>=0;j--)
        cout << " " << j;
        cout <<"\n";
    }
    return 0;
}