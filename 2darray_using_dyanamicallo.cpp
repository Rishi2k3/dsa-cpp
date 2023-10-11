#include<iostream>
using namespace std;


int main()
{

    // 2d array creation dyanamically

    int n;
    cout<<" enter row and col for 2d array=";
    cin>>n;

     int** arr= new int*[n];

     for( int i=0; i<n;i++)
     {
        arr[i]= new int[n];
     }

     // taking input into a 2d array 

     for( int i=0; i<n;i++)
     {
        for(int j=0; j<n;j++)
        {
            cin>>arr[i][j];
        }
     }

     // printing elements of a 2d array

     for( int i=0; i<n;i++)
     {
        for(int j=0; j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }


return 0;
}