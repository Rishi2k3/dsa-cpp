#include<iostream>
using namespace std;

void selectionsort ( int arr[], int n )
{
    for(int i=0; i<n-1; i++)
    {
        int minindex=i;

        for( int j =i+1; j<n;j++)
        {
            if( arr[j]<arr[minindex])
            {
                swap(arr[j], arr[minindex]);
            }
        }
    }
}


int main()
{

int arr[7]={12,6,3,9,7,0,4};

selectionsort( arr, 7);

cout<<" code is right !!"<< endl;
     
return 0;
}