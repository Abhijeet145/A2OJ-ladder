#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0tn for(ll i=0;i<n;i++)
#define prll pair<ll,ll>
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    
    int l=0,r=0,p=0;
    for(int i=0;i<n;i++)
    {
        int num1,num2;
        cin >> num1 >> num2;
        l ^= num1;//this will tell if sum is even or odd
        r ^= num2;
        p |= num1 ^ num2;//as we can only swap pairs we check if any pair of different parity was present
    }
    //cout <<(l&1) <<(r&1) << (p&1)<<"--";
    int ans = -1;
    if((l&1) == (r&1))//if both the parity are same
    {
        //cout <<"i was here";
        if((l&1) == 0)//if sum is of even parity
            ans = 0;
        else if(p&1) // else if we had different parity elements for any pair
            ans = 1;
    }
    cout<< ans <<"\n";

    return 0;
}
