#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int num;
    cin >> num;
    int min=num,max=num;
    int ans = 0;
    for(int i=1;i<n;i++)
    {
        cin >> num;
        if(num>max)
        {
            ans++;
            max = num;
        }
        if(num<min)
        {
            ans++;
            min = num;
        }
    }
    cout << ans <<"\n";
    return 0;
}