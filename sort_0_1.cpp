#include <iostream>
using namespace std;

void sortone(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[left] == 0)
        {
            left++;
        }

        else if (arr[right] == 1)
        {
            right--;
        }
        else if (arr[left] == 1 && arr[right] == 0 )
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {1,1,1,0,0,1,0,1};

    sortone(arr, 8);

    printarray(arr, 8);

    return 0;
}