#include<iostream>
using namespace std;

string removeduplicate( string s )
{
    int i=0;

    int size= s.size();

    while(i<size)
    {
        if( s[i]==s[i+1])
        {
            s.erase(i,2);
            
            if(i>0)
            {
                i--;
                size=size-2;
            }

        }

        else
        {
            i++;

        }
    }
    return s;
}


int main()
{

    string s;

    cout<<"enter a string with no spaces !!"<<endl;
    cin>>s;

    cout<<" string without duplicates is "<<removeduplicate(s)<<endl;
     
return 0;
}