#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>a;
    int s,sum;
    for(int i=0;i<3;i++)
    {
         vector<int>row;
        for(int j=0;j<3;j++)
        {
         cin>>s;
         row.push_back(s);
        }
        a.push_back(row);
    }
    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
       cout<<"Row "<<i+1<<" Sum = "<<sum<<endl;

    }
    return 0;
}