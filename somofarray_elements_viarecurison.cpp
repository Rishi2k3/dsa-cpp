#include<iostream>
using namespace std;

int getsum(int arr[], int size)
{
    if(size==0)
    {
        return 0;
    }
    else if (size==1)
    {
        return arr[0];
    }
    else
    {
        return arr[0]+ getsum(arr+1,size-1);
    }
}

int main()
{
     int arr[6]={2,3,5,7,8,9};

     int size=6;

     int sum=getsum( arr,size);
     cout<<" sum of array elements is "<<sum<<endl;

return 0;
}