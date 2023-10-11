#include<iostream>
using namespace std;

class human{
    public:

    int height ;
    int weight ;
    int age;

    int getage()
    {
        return this->age;
    }

    void setweight(int w)
    {
        this->weight=w;
    }

};

class male: public human{

    public:

    string colour ;

    void sleep()
    {
        cout<<" male sleeping: "<<endl;
    }

};


int main()
{
    cout<<" sab sahi chl raha hai :"<<endl;

    male object1;

   
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.getage()<<endl;

    object1.setweight(15);

    cout<<object1.weight<<endl;
   
    object1.sleep();
    

     
return 0;
}