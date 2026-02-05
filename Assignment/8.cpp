#include<iostream>
#include<vector>
using namespace std;
int main()
{    
    int n,s,count=0;
    vector<int>a;
    cout<<"Enter size";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>s;
    a.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        count++;
    }
    cout<<"Even elements are:"<<count;
    return 0;

}