#include <iostream>
using namespace std;

int fibo(int n)
{
    int a = 0, b = 1 , sum=0;
    cout << a << endl;
    cout << b << endl;
    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
       cout<<sum<<endl;
       a=b;
       b=sum;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter n=";
    cin>>n;
   int ans = fibo(n);
   cout<<"last term of fibo series is = "<<ans<<endl;

    return 0;
}