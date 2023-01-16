#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n;
    cin >> n;
    int c5 = 0,c0 = 0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num==0)
        c0++;
        else
        c5++;
    }
    string ans="";
    if(c0>0 && c5>=9)
    {
        int x = c5/9; 
        for(int i=0;i<x;i++)
            ans+="555555555";
        for(int i=0;i<c0;i++)
            ans+="0";
    }
    else if(c0>0)
    ans = "0";
    else
    ans = "-1";
    cout << ans <<"\n";
    return 0;
}