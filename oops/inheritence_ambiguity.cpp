#include<iostream>
using namespace std;

class a {

    public:

    void func()
    {
        cout<<" this is function a :"<<endl;
    }
};

class b {

    public:

    void func()
    {
        cout<<" this is function b :"<<endl;
    }
};

class c: public a, public b{

};

int main()
{

    c obj;

    // obj.func();
    // dono classses me se konse wala call hoga ye nhi pta 

    // use of scope resolution operator 

    obj.a::func();
    obj.b::func();
     
return 0;
}