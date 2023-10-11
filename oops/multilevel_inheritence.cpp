#include<iostream>
using namespace std;

// multilevel  inheritence 

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

class germanshephard : public dog{

};

int main()
{
    germanshephard d;

    d.speak
return 0;
}