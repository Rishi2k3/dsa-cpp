#include<iostream>
using namespace std;


int main()
{
     int i,j,space;
     int n,count=1;
     cin>>n;
     for(i=1;i<=n;i++)

     {
        space= n-i;
        while(space)
        {
            cout<<" ";
            space--;

        }
         for(j=1;j<=i;j++)
         {
            cout<<count;
            count++;
         }
         cout<<endl;
         

     }
return 0;
}