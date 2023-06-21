#include <bits/stdc++.h>
using namespace std;
// Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

// Macros (they replace the words with exact code so be careful while using them)
#define F first
#define S second
#define B begin()
#define E end()
#define GI greater<int>
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define f0tn for (int i = 0; i < n; i++)

////////////////////////Template ends////////////////////////


void solve(ll tc)
{
    // start coding
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; ++i)
        cin >> x[i];
    int flag = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int small = x[i], large = x[i + 1];
        if (small > large)
            swap(small, large);
        for (int j = 0; j < n - 1; ++j)
        {
            if (i == j)
                continue;
            int ssmall = x[j], llarge = x[j + 1];
            if (ssmall > llarge)
                swap(ssmall, llarge);

            if (small > ssmall && small < llarge)
            {
                if (large < ssmall || large > llarge)
                    flag++;
            }
            else if (small < ssmall || small > llarge)
            {
                if (large > ssmall && large < llarge)
                    flag++;
            }
        }
    }
    if (flag)
        cout << "yes";
    else
        cout << "no";
}

////////////////// main function to call test cases//////////////
int main()
{
    // to raad and write files from text files
    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);

    // for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1, tc = 1;
    // cin >> t;
    while (t--)
    {
        solve(tc++);
    }
    return 0;
}

