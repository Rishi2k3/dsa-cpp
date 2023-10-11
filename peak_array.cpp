#include <iostream>
using namespace std;

int peak_element(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)

    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }

        else
        {
            e=mid;
        }

        mid= s+(e-s)/2;
    }

    return s;
}

int main()
{

    int arr[7]={ 0,4,7,9,6,3,1};

    cout<<"peak element index is = "<<peak_element(arr,7)<<endl;
    cout<<"peak element is = "<<arr[peak_element(arr,7)]<<endl;

    return 0;
}