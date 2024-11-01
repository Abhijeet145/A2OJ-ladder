#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int k;
    string s;
    cin >> k >> s;
    
    vector<int> freq(26,0);
    for(auto x:s)
        freq[x-'a']++;

    string copy="";
    for(int i=0;i<26;i++)
    {
        if(freq[i]==0 || freq[i]%k==0)
        {
            for(int j=0;j<freq[i]/k;j++)
            copy +='a' + i;
        }
        else
        {
            copy = "-1";
            break;
        }
    }
    
    if(copy != "-1")
    {
        for(int j=0;j<k;j++)
        cout << copy;
    }
    else
    cout <<-1;


    cout <<"\n";
    return 0;
}