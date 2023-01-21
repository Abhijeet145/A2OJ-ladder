#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int n,a=0,b=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num==100)
            a++;
        else
            b++;
    }
    // int sum = 100 * a + 200 * b;
    // if (sum % 200 != 0) cout << "NO" << endl;
    // else {
    //     int half = sum / 2;
    //     bool ans = false;
    //     for (int i = 0; i <= b; ++i)
    //         if (200 * i <= half && half - 200 * i <= a * 100) ans = true;
    //     if (ans) cout << "YES" << endl;
    //     else cout << "NO" << endl;
    // }
    string ans = "NO";
    if((a%2==0 && b%2==0) || (a>=2 && a%2==0 && b%2!=0))
        ans = "YES";
    cout << ans <<"\n";

    return 0;
}
