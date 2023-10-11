#include <iostream>
using namespace std;

int main()
{
    int amt, n500, n100, n50, n20, n10, n1;
    cout << "enter the amount= ";
    cin >> amt;

    switch (amt >= 500)
    {
    case 1:
        n500 = amt / 500;
        amt = amt - n500 * 500;
        break;
    }
    switch (amt >= 100)
    {
    case 1:
        n100 = amt / 100;
        amt = amt - n100 * 100;
        break;
    }
    switch (amt >= 50)
    {
    case 1:
        n50 = amt / 50;
        amt = amt - n50 * 50;
        break;
    }
    switch (amt >= 20)
    {
    case 1:
        n20 = amt / 20;
        amt = amt - n20 * 20;
        break;
    }
    switch (amt >= 10)
    {
    case 1:
        n10 = amt / 10;
        amt = amt - n10 * 10;
        break;
    }
    switch (amt >= 1)
    {
    case 1:
        n1 = amt / 1;
        amt = amt - n1 * 1;
        break;
    }

    cout << " 500 notes =" << n500 << endl;
    cout << " 100 notes =" << n100 << endl;
    cout << " 50 notes =" << n50 << endl;
    cout << " 20 notes =" << n20 << endl;
    cout << " 10 notes =" << n10 << endl;
    cout << " 1 notes =" << n1 << endl;
    return 0;
}