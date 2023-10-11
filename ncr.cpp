#include <iostream>
using namespace std;

int fact(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int ncr(int a, int b)

{
    int num= fact(a);
    int denom= fact(a-b) * fact (b);
    int ans= num/denom;
    return ans;
}

int main()
{
    int n, r;
    cout << "enter n=";
    cin >> n;
    cout << "enter r=";
    cin >> r;

    int ans = ncr(n, r);
    cout << "answer is = " << ans << endl;

    return 0;
}