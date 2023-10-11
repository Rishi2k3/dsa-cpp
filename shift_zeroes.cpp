#include<iostream>
using namespace std;

void shiftzero ( int arr[], int n )
{
    int nonzero= 0;
    for( int i=0 ; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[nonzero]);
            nonzero++;

        }
    }
}

void printarray( int arr[], int n )
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[7]={0,3,0,7,0,2,5};

    shiftzero( arr, 7);

    printarray(arr,7);
     
return 0;
}