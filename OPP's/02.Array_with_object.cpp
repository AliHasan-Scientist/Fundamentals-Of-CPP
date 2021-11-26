#include <iostream>

using namespace std;
// My class
class MyClass
{
    bool gender; // Data Members of a class

public:
    int id;
    string name;
    short age;
    void getInfo() // Member function of class
    {
        cout << "__________________________________________" << endl;
        cout << "Id: " << id << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "__________________________________________";
    }
};
int main(int argc, char const *argv[])
{

    MyClass entities[3];
    // Object instances attributes
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter you id:" << endl;
        cin >> entities[i].id;
        cout << "Enter you name:" << endl;
        cin >> entities[i].name;
        cout << "Enter you age:" << endl;
        cin >> entities[i].age;
    }
    for (int i = 0; i < 3; i++)
    {
        entities[i].getInfo();
    }
}