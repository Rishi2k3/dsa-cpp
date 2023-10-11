#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value for a = ";
    cin >> a;
    cout << "enter the value for b = ";
    cin >> b;
    char sign;
    cout << "enter the operation = ";
    cin >> sign;

    switch (sign)
    {
    case '+':
    {
        cout << (a + b) << endl;
        break;
    }

    case '-':
    {
        cout << (a - b) << endl;
         break;
    }

    case '*':
    {
        cout << (a * b) << endl;
         break;
    }

    case '/':
    {
        cout << (a / b) << endl;
         break;
    }

    default:
    {
        cout << "operation not available /valid " << endl;
    }
    }

    return 0;
}