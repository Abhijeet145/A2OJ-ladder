#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    string ans = "YES";
    int a25 = 0,b50=0;
    f0tn
    {
        int num;
        cin >> num;
        if(num == 25)
        a25++;
        else if(num == 50)
        {
            if(a25>0)
                a25--;
            else
                ans = "NO";   
            b50++; 
        }
        else
        {
            if(b50>0 && a25>0)
            {
                b50--;
                a25--;
            }
            else if(a25>2)
                a25 -= 3;
            else
                ans = "NO";
        }
    }
    cout<< ans <<"\n";

    return 0;
}
