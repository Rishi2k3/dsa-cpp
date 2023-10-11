#include<iostream>
using namespace std;

void merge ( int arr1[], int n , int arr2[], int m , int arr3[])
{

    int i=0, j=0, k=0;
    
    while(i<n && j<m)
    {
        if( arr1[i]< arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }

        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;

        }
    }

    while(i<n)
    {
        arr3[k]=arr1[i];
        i++;
        k++;

    }

    while(j<m)
    {
        arr3[k]=arr2[j];
        j++;
        k++;

    }



}

void printarray( int arr[], int size )
{
    for ( int i=0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main()
{
     int arr1[5]={1,4,6,8,9};
     int arr2[4]={2,5,7,10};

     int arr3[9]={0};

     merge( arr1, 5, arr2,4,arr3);

     printarray( arr3,9);
return 0;
}