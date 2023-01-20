#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    string s1,s2;
    getline(cin, s1);
    getline(cin,s2);
    vector<int> freq1(200),freq2(200);
    for(auto x:s1)
        freq1[x]++;
    for(auto x:s2)
        freq2[x]++;
    string ans = "YES";
    for(int i=0;i<200;i++)
    {
        if(i==' ')
        continue;
        if(freq2[i] > freq1[i])
        {
            ans = "NO";
            break;
        }
    }
    
    cout << ans <<"\n";

    return 0;
}
