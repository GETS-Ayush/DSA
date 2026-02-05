#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    cout<<"Enter elements:";
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]*a[i]<<" ";
    return 0;
}