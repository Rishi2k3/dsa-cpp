#include <iostream>
using namespace std;

int main()
{
    int i, j, n, spaces;
    cout << "enter n=";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j<<" ";
        }

        for (j = 1; j <= (i - 1) * 2; j++)
        {
            cout << "*"<<" ";
        }
        j = n - i + 1;
        while (j >= 1)
        {
            cout << j<<" ";
            j--;
        }
        cout << endl;
    }
    return 0;
}