#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n;
    cin >> n;
    int arr[7];
    int sum=0;
    for(int i=0;i<7;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if(n%sum==0)
    n = sum;
    else
    n = n%sum;
    int i;
     
    for(i=0;i<7;i++)
    {
        if(arr[i]>=n)
        break;
        n -= arr[i];
    }
     
    cout << i+1<<"\n";
    return 0;
}