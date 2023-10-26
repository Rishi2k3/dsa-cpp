#include<iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int arr[],int n )
{
    for(int i=1; i<n;i++)
    {
        int temp= arr[i];
        int j=i-1;

        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }

        }
        arr[j+1]=temp;
    }
}


int main()
{
     int arr[] = {12, 3, 4, 5, 7, 1, 34, 87, 98, 99};
    int arr2[]={1,2,3,4,5,6,7,8,9,10};

    int n = 10;

    insertionsort(arr, n);
    printarr(arr, n);
    insertionsort(arr2, n);
    printarr(arr2, n);

return 0;
}