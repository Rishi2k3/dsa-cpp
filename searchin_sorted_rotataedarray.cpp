#include <iostream>
using namespace std;

int findpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int binarysearch(int arr[], int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = s+ ( e-s)/2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = s+ (e-s)/2;
    }
    return -1;
}

int searchkey( int arr[], int n , int key)

{
    int pivot = findpivot( arr, n);

    if(key>= arr[pivot] && key<=arr[n-1])
    {
        return binarysearch( arr, pivot , n-1, key);
    }
    else
    {
        return binarysearch( arr, 0, pivot-1, key);
    }

}


int main()
{

int arr[5]={9,19,1,4,7};
int key=4;

cout<<" index of the key in sorted rotated array is = "<<searchkey( arr,5,4)<<endl;

    return 0;
}