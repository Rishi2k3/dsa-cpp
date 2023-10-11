#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray( int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {3, 6, 7, -9, 1, 0};
    int arr2[5] = {7, 0, 3, -1, 5};

    reverse(arr, 6);
    reverse(arr2, 5);

    printarray(arr, 6);
    printarray(arr2, 5);

    return 0;
}