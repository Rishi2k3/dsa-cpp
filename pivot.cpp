#include <iostream>
using namespace std;

int findpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while(s<e)
    {
        if ( arr[mid] > arr[0])
        {
            s=mid+1;

        }

        else
        {
            e=mid ;
        }

        mid = s+ (e-s)/2;


    }

    return s;
    
    
}

int main()
{

    int arr1[6]={8,17,20,4,6,7};
    int arr2[7]={8,17,20,98,4,6,7};

    cout<<"index of pivot is = "<< findpivot(arr1,6)<<endl;
    cout<<"index of pivot is = "<< findpivot(arr2,7)<<endl;

    return 0;
}