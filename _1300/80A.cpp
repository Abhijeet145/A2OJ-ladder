#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    if(n<=1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;
}
int main()
{
    
    int m,n;
    cin >> m >> n;
    string ans = "NO";
    for(int i=m+1;i<=n;i++)
    {
        if(isPrime(i))
        {
            if(i==n)
            ans = "YES";
            break;
        }
    }
    cout << ans<<"\n";
    return 0;
}