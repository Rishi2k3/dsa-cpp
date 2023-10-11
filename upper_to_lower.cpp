#include<iostream>
using namespace std;

char tolower( char ch )
{
    if(ch>='a' && ch<='z')
    {
        return ch ;
    }

    else 
    {
        return ch+32;
    }
}


int main()
{

    cout<<" lower of C is ="<< tolower('C')<<endl;
    cout<<" lower of d is ="<< tolower('d')<<endl;
     
return 0;
}