#include<iostream>
using namespace std;
int main()
{
    // 1st program
    int c=1,a,n;
    cout<<"Enter number";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>=1;j--)
        {
            cout<<" ";
        }
         a=c;
        while(a>0)
        {
            cout<<"*";
            a--;
        }
        cout<<endl;
        c+=2;
       
    }
    cout<<endl;

    //2nd program
    int d=n+n-1;
    for(int i=n;i>0;i--)
    {
       for(int j=i;j<n;j++)
       cout<<" ";
       a=d;
       while(a>=1)
       {
        cout<<"*";
        a--;
       }
       cout<<endl;
       d-=2;
    }
    cout<<endl;

    //3rd program
    c=1;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>=1;j--)
        {
            cout<<" ";
        }
         a=c;
        while(a>0)
        {
            cout<<"*";
            a--;
        }
        cout<<endl;
        c+=2;
       
    }
    d=n+n-1;
    for(int i=n;i>0;i--)
    {
       for(int j=i;j<n;j++)
       cout<<" ";
       a=d;
       while(a>=1)
       {
        cout<<"*";
        a--;
       }
       cout<<endl;
       d-=2;
    }
    cout<<endl;

    //4th program
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n;j>i;j--)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;

    //5th program;
    int e=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<e;
            if(e==1)
            e--;
            else
            e++;
        }
        cout<<endl;

    }
    cout<<endl;

    //6th program
    int x=n+n-2;
    for(int i=0;i<n;i++)
    {
        int f=1;
        int g=1;
        for(int j=0;j<=i;j++)
        {
            cout<<f;
            f++;
        }
        for(int j=x;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j=i+1;j>=1;j--)
        {
            cout<<j;
        }
        x-=2;
        cout<<endl;
    }
    cout<<endl;

    //7th program
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
     cout<<endl;

     //8th program
     for(int i=0;i<n;i++)
     {
        char l='A';
        for(int j=n-1-i;j>=1;j--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        {
            cout<<l;
            l++;
        }
        l-=2;;
        for(int j=0;j<i;j++)
        {
            cout<<l;
            l--;
        }
        cout<<endl;
     }
     cout<<endl;

     //9th program
    
    char m='E';
    char o;
     for(int i=0;i<n;i++)
     {
        o=m-i;
        for(int j=0;j<=i;j++)
        {
            cout<<o;
            o++;
        }
        cout<<endl;
     }
     cout<<endl;

     //10th program
     for(int i=0;i<n;i++)
     {
        if(i==n-1||i==0)
        {
            for(int j=0;j<n;j++)
            cout<<"* ";
        }
      
        else 
        {
            for(int j=0;j<n;j++)
            {
                if(j==0||j==(n-1))
                cout<<"* ";
                else
                cout<<"  ";
            }
        }
        cout<<"\n";
     }

     //11th program
    n=5;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int t=i;
            int l=j;
            int b=(2*n-2)-i;
            int r=(2*n-2)-j;
            int mt=min(min(t,b),min(l,r));
            cout<<(n-mt)<<" ";
        }
        cout<<endl;\
    }
     


    return 0;
}




