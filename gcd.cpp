#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

int main()
{

    int a, b;

    cout << " enter any two int num = ";
    cin >> a ;
    cout<<endl;
    cin >> b;

    cout << " gcd of a and b is = " << gcd(a, b) << endl;

    return 0;
}