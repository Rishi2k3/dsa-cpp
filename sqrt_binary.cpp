#include<iostream>
using namespace std;

    long long int sqrtinteger( int n )
    {
        int s =0;
        int e= n ;
        long long int mid = s+ ( e-s)/2;
        long long int ans = -1;

        while ( s<=e)
        {
            long long int square = mid * mid ;
            if( square==n)
            {
                return mid ;
            }

            else if ( square < n)
            {
                ans = mid ;
                s= mid +1;
            }
            else
            {
                e= mid -1;
            }
            mid = s+(e-s)/2;
        }
        return ans ;

    }

    double moreprecision( int n , int precision , int tempsol)
    {
        double ans = tempsol;
        double factor =1;

        for( int i=0; i<precision; i++)
        {
            factor= factor /10;


            for ( double j=ans; j*j< n; j=j+factor)
            {
                ans = j;
            }
        }
        return ans ;
    }


int main()
{
     
     int n ;
     cout<<" enter any number = ";
     cin>>n;

     int tempsol= sqrtinteger(n);

     cout<<" final answer is = "<< moreprecision(n,1,tempsol)<<endl;


return 0;
}