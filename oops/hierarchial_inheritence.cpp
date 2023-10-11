#include<iostream>
using namespace std;

// hierarchial inheritence 
class a {

    public:

    void func1()
{
    cout<<" inside class a :"<<endl;
}
};

// inheriting class a into class b 
class b: public a{


public :

void func2()

{
    cout<<" inside class b :"<<endl;
}
};

// inheriting class a into class c 

class c: public a{

public:

void func3()
{
    cout<<" inside class c :"<<endl;
}
};



int main()
{
     a obj1;

     obj1.func1();

b obj2;

obj2.func1();
obj2.func2();

c obj3;

obj3.func1();
obj3.func3();

return 0;
}