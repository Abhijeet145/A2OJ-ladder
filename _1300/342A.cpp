#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int n;
    cin >> n;
    vector<int> arr(8);
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }    
    int c1=0,c2=0,c3 = 0;
    //we can make only 3 groups 1,2,4 ; 1,2,6 and 1,3,6
    if(arr[0]>0 || arr[5]>0 || arr[7]>0)
    cout << -1 <<"\n";
    else
    {
        vector<int> temp;
        //try making 1,2,4 group
        while(arr[1]>0 && arr[2]>0 && arr[4]>0)
        {
            temp.push_back(1);
            temp.push_back(2);
            temp.push_back(4);
            arr[1] -= 1;
            arr[2] -= 1;
            arr[4] -= 1;
        }
        //try making 1,2,6 group
        while(arr[1]>0 && arr[2]>0 && arr[6]>0)
        {
            temp.push_back(1);
            temp.push_back(2);
            temp.push_back(6);
            arr[1] -= 1;
            arr[2] -= 1;
            arr[6] -= 1;
        }
        //try making 1,3,6 group
        while(arr[1]>0 && arr[3]>0 && arr[6]>0)
        {
            temp.push_back(1);
            temp.push_back(3);
            temp.push_back(6);
            arr[1] -= 1;
            arr[3] -= 1;
            arr[6] -= 1;
        }
        if(arr[1] > 0 || arr[2] > 0 || arr[4]>0 || arr[6]>0)
        cout << -1 <<"\n";
        else
        {
            for(int i=0;i<temp.size();i+=3)
                cout << temp[i] <<" "<<temp[i+1]<<" "<<temp[i+2]<<" \n";
            
        }
    }
    

    return 0;
}
