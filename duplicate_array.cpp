#include<iostream>
using namespace std;

int dupelement ( int arr[], int size)
{
    int ans =0;
    for( int i=0 ; i<size; i++)
    {
        ans= ans^arr[i];
    }

    for( int i=1 ; i<size;i++)
    {
        ans=ans^i;
    }
    return ans ;
}

int main()
{
     int arr[7]={1,2,3,4,5,6,1};

     cout<<"duplicate element in the array is "<< dupelement(arr,7)<<endl;

return 0;
}