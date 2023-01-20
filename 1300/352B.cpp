#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int a1[100001],a2[100001];
bool b1[100001];
int main()
{
	int n,a,o=0;
	cin >> n;
	for(int i=1;i<=n;++i) {
		cin >> a;
		if(b1[a])
            continue;
		if(a1[a]) 
        {
			if(!a2[a])
                a2[a] = i-a1[a];
			else if(a2[a] != i-a1[a])
			{
                b1[a] = 1;
                --o;
            }
		}
		else ++o;
		a1[a]=i;
	}
	cout << o <<"\n";
	for(int i=1;i<100001;++i)
        if(a1[i]&&!b1[i])
            cout << i << " "<< a2[i]<<"\n";
    return 0;
}
