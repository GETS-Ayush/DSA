#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>v;
    int a,m;
    cout<<"Enter elements";
    for(int i=0;i<3;i++)
    {
        vector<int>row;
        for(int j=0;j<3;j++)
        {
            cin>>a;
            row.push_back(a);
        }
        v.push_back(row);  
    }
    m=v[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(v[i][j]>m)
            m=v[i][j];
        }
    }
    cout<<"Max ="<<m;
    return 0;
}