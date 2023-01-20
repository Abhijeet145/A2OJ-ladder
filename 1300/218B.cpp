#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m;
    cin >> n >> m;
    priority_queue<int> pq1;// max heap
    priority_queue<int,vector<int>,greater<int>> pq2; // min heap
    int mini = 0,maxi = 0;
    for(int i=0;i<m;i++)
    {
        int num;
        cin >> num;
        pq1.push(num);
        pq2.push(num);
    }
    
    for(int i=0;i<n;i++)
    {
        int a = pq1.top();
        maxi += a;
        pq1.pop();
        if(a!=1)
        pq1.push(a-1);

        a = pq2.top();
        mini += a;
        pq2.pop();
        if(a!=1)
        pq2.push(a-1);
    }
    cout << maxi <<" " << mini<<"\n";
    return 0;
}