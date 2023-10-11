#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enter the value for n =";
    cin >> n;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}