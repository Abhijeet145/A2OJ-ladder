#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int num;
    unordered_set<int> s;
    for(int i=0;i<4;i++)
    {
        cin >> num;
        s.insert(num);
    }
    cout << 4-s.size() <<"\n";
    return 0;
}