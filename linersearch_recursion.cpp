#include<iostream>
using namespace std;

void printarray( int arr[], int n)
{

    cout<<"size of array is "<<n<<endl;
    for( int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linersearch( int arr[], int size , int key )
{

    printarray(arr,size);

    if(size==0)
    {
        return false;
    }
    else if(arr[0]==key)
    {
        return true ;
    }
    else
    {
        return linersearch(arr+1,size-1,key);
    }
}
int main()
{
     int arr[6]={2,3,5,7,8,9};
     int size=6;
     int key;
    cout<<"enter a key = ";
    cin>>key;

    bool ans = linersearch(arr,size,key);

    if(ans )
    {
        cout<<" key is present "<<endl;
    }
    else
    cout<<" key is not present "<<endl;

    return 0;
}