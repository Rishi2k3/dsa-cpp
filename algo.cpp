#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
     
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<v.capacity()<<endl;


    int n = v.size();

    for(int i =0; i<n; i++)
    {

        cout<<v[i]<<" ";
    }
cout<<endl;


cout<<binary_search(v.begin(),v.end(),6)<<endl; //----> true 
cout<<binary_search(v.begin(),v.end(),9)<<endl; //----> false


cout<<*(v.begin())<<endl;

cout<<*(v.end()-1)<<endl;


return 0;
}