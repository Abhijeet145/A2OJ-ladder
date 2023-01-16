#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int a1[100001],a2[100001];
bool b1[100001];
int main()
{
	string s,ans;
    cin >> s;
    int freq[26] = {0};
    for(auto x:s)
        freq[x-'a']++;

    int odd = 0;
    for(int i=0;i<26;i++)
        if(freq[i]%2)
            odd++;

    if(odd<=1)
        ans = "First";
    else
        ans = odd%2==0?"Second":"First";
    
    cout << ans <<"\n";

    return 0;
}
