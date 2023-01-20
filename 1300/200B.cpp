#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n ;
    cin >> n;
    int num;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        sum+=num;
    }
    cout << sum/n <<"\n";
    return 0;
}