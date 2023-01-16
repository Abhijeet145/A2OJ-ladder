#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int x_sum=0,y_sum=0,z_sum=0;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x_sum += a;
        cin >>a;
        y_sum += a;
        cin>>a;
        z_sum += a;
    }
    if(x_sum!=0 ||y_sum!=0||z_sum!=0)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}