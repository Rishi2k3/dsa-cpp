#include <iostream>
#include <string.h>
using namespace std;

// declaring a class
class hero
{

private:
    int health;

public:
    // properties of class or data members

    char *name;

    char level;

// static data member 
// initialised outside the class 
// syntax --> data_type class_name :: variable_name = value ;
    static int timetocomplete;

    // defalut constructer

    hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    // Paramerterised Constructor
    hero(int health)
    {
        this->health = health;
    }

    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructer

    // call by ref is used as call by value will make it a infinite loop and will show  error
    hero(hero &temp)
    {
        // deep COPY 
        // a new char array is created and name of hero1 is copied in that and then passed to hero 2

         char *ch = new char[strlen(temp.name) + 1];
         strcpy(ch, temp.name);
         this->name = ch;



        cout << "copy constructer is called:" << endl;
        this->health = temp.health;
        this->level = temp.level;
        // shallow copy 
    //     this->name= temp.name;
     }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ]";
        cout << endl<<endl;
    }

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void setname(char ch[])
    {
        strcpy(this->name, ch);
    }
};

int hero :: timetocomplete=5;

int main()
{
    // static alocation of object
    // ramesh is a class object

    //  hero ramesh;

    // ramesh.sethealth(65);
    // ramesh.setlevel('A');

    // cout << " level  of ramesh:" << ramesh.level << endl;
    // cout << " health  of ramesh:" << ramesh.gethealth() << endl;

    // dynamic allocation of object

    // hero *b = new hero;

    // (*b).level = 'B';
    // (*b).health = 87;

    // arrow operator is used in classes in place of dot operator used in structures

    // cout << " health of b: " << b->health << endl;
    // cout << " level of b: " << b->level << endl;

    hero hero1;

    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Babbar";
    hero1.setname(name);

    // hero1.print();


   // use default copy constructor

    hero hero2(hero1);
    // hero2.print();

    // can also copy like that 
//    Hero hero2 = hero1;

hero1.name[0]='G';

hero1.print();
// on updating hero 1 , hero 2 also gets updated as in copy constructer shallow copy concept was followed
// shallow copy creates a copy of hero1 into hero 2 and has same memory access // call by ref is followed 
// in deep copy , a new char array is created in heap and then its vallue is passed to hero 2
// in this way name in hero 2 has a diff address 

hero2.print();


// copy assignment operator 


hero1=hero2;

hero1.print();

hero2.print();

cout<< hero::timetocomplete<<endl;
// updation using object 

hero1.timetocomplete=10;
cout<<hero1.timetocomplete<<endl;
cout<<hero2.timetocomplete<<endl;


    return 0;
}