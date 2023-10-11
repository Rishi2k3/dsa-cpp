#include<iostream>
using namespace std;

int  print(int a)
{
    a=a-10;
    cout<<a<<endl;
    return a;

}
int main()
{
    int n;
    cout<<"enter n = ";
    cin>>n;
    cout<<print(n)<<endl;
    cout<<n<<endl;
     
return 0;
}