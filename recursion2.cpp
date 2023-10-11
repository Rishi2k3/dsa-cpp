
// print counting using recursion

#include <iostream>
using namespace std;

void printcounting(int n)
{
    // base condition
    if (n == 0)
    {
        return;
    }

    // recursive relation
    printcounting(n - 1);

    cout << n << endl;
}

int main()
{

    int n;
    cout << "enter the value for n =";
    cin >> n;
    printcounting(n);

    return 0;
}