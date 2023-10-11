#include<iostream>
using namespace std;


int main()
{
     int i,j,space,n;
     cout<<"enter n =";
     cin>>n;
     
     for(i=1;i<=n;i++)
     {
        space=1;
        while(space<i)
        {
            cout<<" ";
            space++;
        }
        for(j=1;j<=n-i+1;j++)
        {
            cout<<i;
        }
        cout<<endl;
     }
return 0;
}