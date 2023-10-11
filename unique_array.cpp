#include <iostream>
using namespace std;

int uniquearray(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {2, 4, 7, 4, 7, 2, 99};

    cout<<" unique element of the array is = "<< uniquearray( arr,7)<<endl;

    return 0;
}