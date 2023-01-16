#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    int arr[26]={0};
    for(auto x:s)
    arr[x-'a']=1;
    int count = 0;
    for(int i=0;i<26;i++)
    count += arr[i];
    if(count%2)
    cout << "IGNORE HIM!" ;
    else
    cout << "CHAT WITH HER!";
    return 0;
}