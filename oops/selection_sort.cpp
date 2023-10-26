#include<iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for(int i=0; i<n-1;i++) // n-1 rounds 
    {
        int minindex=i;
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[minindex])
                {
                    swap(arr[j],arr[minindex]);
                }
            }
        }
    }

}

void printarr(int arr[], int n )
{
    for(int i=0; i<n;i++)

    {cout<< arr[i]<<" ";
    }
    cout<<endl;

}


int main()
{


 int arr[]= {12,3,4,5,7,1,34,87,98,99};

 int n = 10;

 selectionsort(arr,n);
 printarr(arr,n);

return 0;
}