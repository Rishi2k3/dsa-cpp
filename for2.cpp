#include<iostream>
using namespace std;


int main()
{
    int i,j;
     for(i=0;i<5;i++)
     {
        for(j=i;j<=5;j++)
        {
            if(i+j==10)
            {
                break;
            }
            else
              cout<<i<<" "<<j<<endl; 
        }
       
        
     }
return 0;
}