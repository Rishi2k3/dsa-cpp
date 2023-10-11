#include <iostream>
using namespace std;

int power(int n)
{
    // base condition
    if (n == 0)
    {
        return 1;
    }
    // recursive relation
    else
        return 2 * power(n - 1);
}

int main()
{
    int n;
    cout << "enter the value for n =";
    cin >> n;

    // func call
    cout << " answer is = " << power(n) << endl;

    return 0;
}