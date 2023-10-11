#include <iostream>
using namespace std;

void altreverse(int arr[], int size)
{
    int start = 0;
    int alt = 1;

    while (alt <= size)
    {
        swap( arr[start], arr[alt]);
        start= start+2;
        alt=alt+2;

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
    int arr[8] = {1, 3, 6, 7, 4, -9, 0, 8};

    int arr2[7]={2,5,7,8,3,1,0};

    altreverse(arr, 8);
    printarray( arr, 8);
    altreverse(arr2, 7);
    printarray( arr2, 7);

    return 0;
}