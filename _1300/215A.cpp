#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
    cin >> b[i];
    pair<int,int> ans = {0,0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //cout<< b[j]/a[i] << " "<<a[i]<<" "<<b[j]<<endl;
            if(b[j]/a[i]*a[i] == b[j])
            {
                if(b[j]/a[i] > ans.first)
                    ans = {b[j]/a[i] , 1};
                else if(b[j]/a[i] == ans.first)   
                    ans.second += 1; 
            }
        }
    }
    cout << ans.second<<"\n";
    return 0;
}