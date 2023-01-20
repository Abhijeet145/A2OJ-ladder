#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int y;
    cin >> y;
    int a,b,c,d,year = y+1;
    while(1)
    {
        y = year;
        a = y%10; y/=10;
        b = y%10; y/=10;
        c = y%10; y/=10;
        d = y;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=b && c!=d)
        break;
        year++;
    }
    cout << year;
    return 0;
}