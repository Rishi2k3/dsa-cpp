#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enter the value for n =";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}