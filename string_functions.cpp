#include<iostream>
using namespace std;


int main()
{
     string str="rishiagarwal";
     string part="rishi";
     
     cout<<str.find(part)<<endl;
     str.erase(str.find(part),part.length());

     cout<<str<<endl;
}