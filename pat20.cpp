#include<iostream>
using namespace std;


int main()
{
     int i,j,n,spaces;
     cout<<"enter n=";
     cin>>n;


     for(i=1;i<=n;i++)
{
    spaces=n-i;
    while(spaces)
    {
        cout<<" ";
        spaces--;

    }
    for(j=1;j<=i;j++)
    {
        cout<<j;

    }
    j=i-1;
    while(j>=1)
    {
        cout<<j;
        j--;
    }
    cout<<endl;
}
return 0;
}