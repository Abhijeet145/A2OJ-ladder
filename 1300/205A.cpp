#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n ;
    cin >> n;
    int min = INT_MAX,ans=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num<min)
        {
            min = num;
            ans = i+1;
        }
        else if(num==min)
        ans = 0;
    }
    if(ans!=0)
    cout << ans<<"\n";
    else
    cout << "Still Rozdil\n";
    return 0;
}