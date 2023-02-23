#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	
    ll t,sx,sy,ex,ey;
    cin >> t >> sx >> sy >>ex >> ey;
    int ans = -1;
    string s;
    cin >> s;
    ll dx = ex-sx;
    ll dy = ey-sy;

    for(int i=0;i<t;i++)
    {
        if(dx>0 && s[i]=='E')
        dx--;
        if(dx<0 && s[i]=='W')
        dx++;
        if(dy>0 && s[i]=='N')
        dy--;
        if(dy<0 && s[i]=='S')
        dy++;
        if(dx==0 && dy==0)
        {
            ans = i+1;
            break;
        }
    }

    cout << ans <<"\n";

    return 0;
}
