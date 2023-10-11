#include<iostream>
using namespace std;

int getmax( int arr[], int n)
{
    int max= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if( arr[i]> max)
        {
            max= arr[i];
        }
    }
    return max;

}

int getmin( int arr[], int n)
{
    int min= INT_MAX;
    for(int i=0;i<n;i++)
    {
        if( arr[i]< min)
        {
            min= arr[i];
        }
    }
    return min;

}

int main()
{
    int size;
    cout<<"enter the size of array = ";
    cin>>size;
     int arr[100];
     for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }
     cout<<" max element in the array is "<< getmax( arr, size)<<endl;
     cout<<" min element in the array is "<< getmin( arr, size)<<endl;
return 0;
}