#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n;
    string s;
    cin >> n >> s;
    //char prev = s[0];
    int count =0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        count++;
    }
    cout << count<<"\n";
    return 0;
}