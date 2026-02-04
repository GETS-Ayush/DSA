#include<iostream>
using namespace std;
int main()
{
    int a[]={1,4,5,6,3};
    for(int i=0;i<5;i++)
    {
        a[i]=a[i]-1;
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}