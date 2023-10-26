#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    for(int i: v)
    {
        cout<<i<<" ";

    }
    cout<<endl;

    vector<int> copy(5,0);

    for(int i:copy)
    {
        cout<<i<<" ";

    }
    cout<<endl;
     
return 0;
}