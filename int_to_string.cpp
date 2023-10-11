#include<iostream>
using namespace std;


int main()
{
     int count= 657;

     string cnt= to_string(count);

     cout<<cnt<<endl;
     cout<<count<<endl;

     for( char ch : cnt)
     {
        cout<<ch<<" ";
     }

cout<<endl;
return 0;
}