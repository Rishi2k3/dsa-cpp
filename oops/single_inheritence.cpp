#include<iostream>
using namespace std;

// single inheritence 

class animal{

    public:

    int age;
    int weight;

    void speak()
    {
        cout<<" speaking :"<<endl;
    }
};

class dog: public animal {

};

int main()
{
    dog d;

    d.speak();

    cout<<d.age<<endl;
     
return 0;
}