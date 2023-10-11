#include<iostream>
#include<map>

using namespace std;

int main()

{
  map<int,string> m;

  m[2]="rishi";
  m[3]="agarwal";
  m[5]="aditi ";
  m[13]="khushi";

for(auto i :m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }


  cout<<endl;

  m[0]="hello";

  m[9]="ballu ";

  cout<<"print again "<<endl;
  cout<<endl;
  

  for( auto  i :m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }

  // count function 
  cout<<endl;

  cout<<m.count(0)<<endl; //----> true (boolean value return )
  
  cout<<m.count(87)<<endl; // ----> false 

  cout<<endl;

  // erase function 

  m.erase(9);

  // whole key pair at 9 is removed 

  for( auto  i :m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }

  cout<<endl;
  

  // find function 

  auto it = m.find(0);

 

  for( auto i = it; i!= m.end();i++)
    {
         cout<<(*i).first<<" "<<endl;
      
    }
  
 
  return 0;

}

