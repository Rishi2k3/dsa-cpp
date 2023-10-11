#include <iostream>
using namespace std;

int sumarray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "enter the size of array = ";
    cin >> size;
    cout << endl;
    int array[100];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << " sum of the elements of array =" << sumarray(array, size) << endl;
    return 0;
}