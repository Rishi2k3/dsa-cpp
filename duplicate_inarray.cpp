#include<iostream>
using namespace std;

int duplicate( int arr[], int n )
{
    int ans =0;

    for( int i=0;i<n;i++)
    {
        ans =ans ^arr[i];

    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    return ans ;
}


int main()
{
    int arr[5]={1,2,3,2,4};
    int n=5;
    cout<<duplicate(arr,5)<<endl;
     
return 0;
}