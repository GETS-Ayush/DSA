#include <bits/stdc++.h>
using namespace std;
void name(int n,int sum){
    if(n==0)
    cout<<sum;
    name(n-1,sum+n);
}
int main() {
int n;
cin >> n;
name(n,0);
}