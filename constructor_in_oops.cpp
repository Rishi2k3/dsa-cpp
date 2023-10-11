#include <iostream>
using namespace std;

// declaring a class
class hero
{
public:
    // properties of class or data members

    int health;
    char level;

    hero()
    {
        cout << " constructor is called : " << endl;
    }
};

int main()
{
    // static alocation of object
    // ramesh is a class object
    cout << endl;
    hero ramesh;

    ramesh.health = 65;
    ramesh.level = 'A';
    cout << endl;
    cout << " level  of ramesh:" << ramesh.level << endl;
    cout << " health  of ramesh:" << ramesh.health << endl;
    cout << endl;
    // dynamic allocation of object

    hero *b = new hero;

    (*b).level = 'B';
    (*b).health = 87;

    // arrow operator is used in classes in place of dot operator used in structures
    cout << endl;
    cout << " health of b: " << b->health << endl;
    cout << " level of b: " << b->level << endl;

    return 0;
}