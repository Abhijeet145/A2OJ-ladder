#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
#define v_int vector<int>
#define v_bool vector<bool>
#define v_long vector<ll>

int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    

    int n,m;
    cin >> n ;
    v_int v(n);
    int oc = 0;
    f0tn{
        cin >> v[i];
        if(v[i]==1) oc++;
    }
    int cc = 0;//current count
    int mc = 0;//max count
    f0tn{
        if(v[i]==0)cc++;
        else cc--;
        if(cc<0)
        cc = 0;
        mc = max(mc,cc);
    }
    if(mc == 0) mc = -1;
    cout << oc + mc <<"\n";
    
    return 0;
}


 