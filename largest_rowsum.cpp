#include <iostream>
using namespace std;

int largest_rowsumindex(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    int maxrowindex = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            maxrowindex = i;
        }
    }

    return maxrowindex;
}

int main()
{

    int arr[3][3];

    cout << " enter elements into a 2d array !! "<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << " printing a 2d array " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout<<" largest row sum index is "<<largest_rowsumindex( arr, 3,3)<<endl;

    return 0;
}