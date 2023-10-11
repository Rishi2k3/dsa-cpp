#include <iostream>
using namespace std;

void print( int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortarray(int arr[], int n)
{
    int i=0,j=0;
    int k=n-1;
    
    while (j <= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        if (arr[j] == 2)
        {
            swap(arr[k], arr[j]);
            k--;
            
        }
        else
        {
            j++;
        }
    }
}

int main()
{
 int arr[6]={1,0,2,1,0,2};
 int n=6;

 print(arr,n);
 cout<<endl;
 sortarray(arr,6);
 print(arr,n);
 cout<<endl;

    return 0;
}