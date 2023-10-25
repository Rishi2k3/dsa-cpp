#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] > target)
            end = mid - 1;
        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[8] = {0, 1, 3, 4, 6, 7, 9, 10};
    int arr2[7] = {-3, 0, 5, 7, 9, 11, 15};

    cout << " index of target element is " << binarysearch(arr, 8, 9) << endl;
    cout << " index of target element is " << binarysearch(arr, 8, 45) << endl;
    cout << " index of target element is " << binarysearch(arr2, 7, 7) << endl;
    cout << " index of target element is " << binarysearch(arr2, 7, 90) << endl;

    return 0;
}