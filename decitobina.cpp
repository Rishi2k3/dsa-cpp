#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    int i = 0;
    cout << "enter the decimal number = ";
    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;
        ans = pow(10, i) * bit + ans;
        n = n >> 1;
        i++;
    }
    cout << "binary value is = " << ans<<endl;
    return 0;
}