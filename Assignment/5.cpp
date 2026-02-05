#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>v;
    int a,sum=0;
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
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+v[i][j];
        }
    }
    cout<<"Sum= "<<sum;
    return 0;
}