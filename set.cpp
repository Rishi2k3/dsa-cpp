#include <iostream>
#include<set>
using namespace std;

int main() {

  set<int> s;

  s.insert(0);
  s.insert(1);
  s.insert(4);
  s.insert(4);
  s.insert(5);
  s.insert(6);


  for( auto i :s)
    {
      cout<<i<<endl;
    }

  cout<<endl;

  set<int> ::iterator it = s.begin();

  s.erase(it);

  // o is erased 

   for( auto  i :s)
    {
      cout<<i<<endl;
    }

cout<<endl;


// count funtion 

cout<<s.count(4)<<endl;
cout<<s.count(9)<<endl;

return 0;

  
  

  


}