#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "enter the value for n = ";
    cin >> n;

    if (isprime(n)==1)
    {
        cout << " it is a prime number!! " << endl;
    }
    else
        cout << " not a prime number!!" << endl;

    return 0;
}
