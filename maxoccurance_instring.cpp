#include<iostream>
using namespace std;

char getmaxoccurancechar( string s)
{
    int arr[26]={0};

    for(int i=0; i<s.length();i++)
    {
        int number=0;
        char ch= s[i];

        if( ch >='a' &&  ch<='z')
        {
            number= ch-'a';
        }
        else
        {
            number= ch-'A';
        }
        arr[number]++;
    }

    int getmax=-1;
    int ans=0;

    for( int i=0; i<26; i++)
    {
        if(getmax< arr[i])
        {
            ans=i;
            getmax=arr[i];
        }
    }

    char finalanswer = ans+ 'a';
    return finalanswer;
}


int main()
{
    string s;
    cout<<"enter a string = ";
    cin>>s;
    cout<<" max occured char in string s is = "<< getmaxoccurancechar(s)<<endl;
     
return 0;
}