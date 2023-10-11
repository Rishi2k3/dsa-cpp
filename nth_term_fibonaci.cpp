#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    int a = 0, b = 1;
    cout << "enter the n=";
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    for (int i = 2; i<=n; i++)
    {

        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<n<<" term of fibonacci series is "<<sum<<endl;
    return 0;
}