#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define pr_ll pair<ll,ll>
#define pr_int pair<int,int> 
#define v_int vector<int>
#define v_bool vector<bool>
#define v_long vector<ll>
void makeprime(vector<bool> &isprime)
{
    
}

int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    

    int n;
    cin >> n;
    
    v_long v(n);
    ll maxi = INT_MIN;
    f0tn{
        cin >> v[i];
        maxi = max(maxi , v[i]);
    }
    maxi = sqrt(maxi)+2;
    v_bool isprime(maxi,true);
    isprime[0] = false;
    isprime[1] = false;
    
    for(ll i=2;i<maxi;i++)
    {
        if(isprime[i])
        {
            for(ll j = i*i;j<maxi;j+=i)//this line was making problem due to out of range
                isprime[j] = false;
        }
    }


    f0tn
    {
        ll temp = sqrt(v[i]);
        if(temp*temp == v[i] && isprime[temp])
        cout <<"YES\n";
        else
        cout <<"NO\n";

    }
    
    return 0;
}


 