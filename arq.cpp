#include<iostream>
#include<vector>
using namespace std;

int ptr=0;

void ARQ(vector<vector<int>> &arr, int m, int sf, int sn, int e1, int e2, int e3)
{
    int size = (1<<m)-1;
    if(e1==1)
    {
        if(sn<=size)
        {
            
        }
        else
        {
            sn = m;
        }
    }
    else if(e2>0)
    {
        if(e2<=size)
        {
            sn += e2;
        }
        else
        {
            sn = size+1;
        }
    }
    else if(e3>0)
    {
        sf = e3;
    }
    arr[ptr][0] = sf;
    arr[ptr++][1] = sn;
}

int main()
{
    int n, m, sf, sn, e1, e2, e3, i, j;
    cin>>n;
    vector<vector<int>> arr(n, vector<int> (2,0));
    for(i=0; i<n; i++)
    {
        cin>>m>>sf>>sn>>e1>>e2>>e3;
        ARQ(arr, m, sf, sn, e1, e2, e3);
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
    }
    return 0;
}
