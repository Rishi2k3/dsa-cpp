#include<iostream>
using namespace std;

// time complexity is high that is n^2
// to reduce tc seive of eratosthenes was introduced

bool checkprime( int n )
{
    for( int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1; 
}

int countprime( int n )
{
    int count =0;
    for( int i=2; i<n;i++)
    {
        if(checkprime(i)==1)
        {
            count++;
        }

    }

    return count ;
}

int main()
{
     
     int n ;

     cout<<" enter a number upto which you want all prime numbers =";
     cin>>n;

     cout<<countprime(n)<<endl;
return 0;
}