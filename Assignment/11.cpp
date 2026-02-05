#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>a;
    string s1;
    cout<<"Enter your name:";
    getline(cin,s1);
    a.push_back(s1);
    cout<<"Enter your year";
    cin>>s1;
    a.push_back(s1);
    cout<<"My name is "<<a[0]<<" and I am currently a "<<a[1]<<" year student";
    return 0;
}
