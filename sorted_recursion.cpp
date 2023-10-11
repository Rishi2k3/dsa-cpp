#include<iostream>
using namespace std;

bool checksorted( int arr[], int size )
{
    // base case

    if(size==0 || size ==1)
    {
        return true;
    }
    else if ( arr[0]> arr[1])
    {
        return false;

    }
    else
    {
        bool ans = checksorted( arr+1, size-1);
        return ans ;
    }
}

int main()
{
     int arr[6]={2,4,5,7,8,9};
     int size=6;

     bool ans =checksorted(arr,size);

     if(ans==1)
     {
        cout<<" array is sorted "<<endl;

     }
     else
     cout<<" array is not sorted "<<endl;

return 0;
}