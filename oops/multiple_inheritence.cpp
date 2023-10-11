#include<iostream>
using namespace std;

// multilevel  inheritence 

class animal{

    public:

    int age;
    int weight;

    void bark()
    {
        cout<<" barking  :"<<endl;
    }
};

class human {

public:

void speak()
{
    cout<<" spekaing :"<<endl;
}
};

// multiple inheritence 

class hybrid : public animal, public human {

};

int main()
{
    
    hybrid obj1;

    obj1.bark();
    obj1.speak();


return 0;
}