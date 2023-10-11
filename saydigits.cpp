// i/p 435
// o/p  four three five

#include <iostream>
using namespace std;

void saydigits( int n, string arr[])
{
    if(n==0)
    {
        return ;
    }

    int digit= n%10;
    n=n/10;

    saydigits(n,arr);

    cout<<arr[digit]<<" ";
}

int main()
{
 int n;
 cout<<" enter a number = ";
 cin>>n;

    string arr[10] = {"zero", "one ",
                      "two",
                      "three",
                      "four",
                      "five",
                      "six",
                      "seven",
                      " eigth",
                      "nine "};

saydigits(n, arr);

    return 0;
}