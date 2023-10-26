#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubblesort(int arr[], int n)
{
    for(int i=1; i<n;i++)
    {
        bool check=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                check=true;
            }
        }
        if(check==false)
        cout<<"array is now sorted completely after "<<i<<"st round"<<endl;
        break;
    }
}

int main()
{
    int arr[] = {12, 3, 4, 5, 7, 1, 34, 87, 98, 99};
    int arr2[]={1,2,3,4,5,6,7,8,9,10};

    int n = 10;

    bubblesort(arr, n);
    printarr(arr, n);
     bubblesort(arr2, n);
    printarr(arr2, n);

    return 0;
}