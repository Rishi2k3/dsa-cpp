#include<iostream>
#include<vector>
using namespace std;

void print( int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void intersection( int arr1[], int n , int arr2[], int m)
{
    vector<int> ans ;
    int i=0,j=0;
    while(i<=n && j<=m)
    {
        if(arr1[i]== arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    
}

int main()
{

int arr1[10]={0,2,4,5,6,7,8,90,98,100};
int arr2[10]={2,3,5,6,7,8,9,10,23,25};

print(arr1,10);
cout<<endl;
print(arr2,10);
cout<<endl;
intersection( arr1,10, arr2,10);
cout<<endl;
     
return 0;
}