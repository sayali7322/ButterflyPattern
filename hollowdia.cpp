// Print hollow diamond using star

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"Enter number :";
    cin>>n;
    
    int space=(2*n-1)/2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            cout<<"*";
        }
        for(j=1; j<=2*i-1; j++)
        {
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1; j<=space; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
    space = 0;

     for(i=n; i>=1; i--)
    {
        for(j=1; j<=space; j++)
        {
            cout<<"*";
        }
        for(j=1; j<=2*i-1; j++)
        {
            if(j==1 || j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(j=1; j<=space; j++)
        {
            cout<<"*";
        }
        cout<<endl;
       
        space++;
    }
    return 0;
}