#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int i = 0, ans = 0;

    cout << "enter the binary number =";
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = pow(2, i) * digit + ans;
        }
        n = n / 10;
        i++;
    }
    cout << "decimal value is =" << ans << endl;
    return 0;
}