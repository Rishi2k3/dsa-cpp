#include<iostream>
using namespace std;
void print ( int arr[],int s , int e)
{
    for(int i=s;i<e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarysearch( int arr[],int s, int e ,int key)
{
    cout<<endl;
    print(arr,s,e);
    cout<<endl;
    
    //base case
    if(s>e)
    {
        return false;
    }
    int mid= s+ (e-s)/2;
    cout<<"valueb of mid is ="<<arr[mid]<<endl;
    if(arr[mid]==key)
    {
        return true ;
    }
    if(arr[mid]> key)
    {
        return binarysearch(arr,s,mid-1,key);
    }
    else
    {
        return binarysearch(arr,mid+1,e,key);
    }
}
int main()
{
     int arr[12]={2,4,5,6,7,8,9,23,45,67,68,99};
     int size=12;
     int key;
     cout<<"enter a key =";
     cin>>key;

     bool ans = binarysearch(arr,0,11,key);
     if(ans)
     {
        cout<<"key is present "<<endl;
     }
     else
     cout<<"key not present"<<endl;

return 0;
}