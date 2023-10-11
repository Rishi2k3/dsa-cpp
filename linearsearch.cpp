#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {12, 43, 2, 6, -9, 0, 7, 9, 5, 1};
    int key;
    cout << "enter the element to be searched = ";
    cin >> key;

    bool found = linearsearch(arr, 10, key);

    if(found==1)
    {
        cout<<"element is present in the array !!"<<endl;

    }
    else
    cout<<" element not found !!"<<endl;

    return 0;
}