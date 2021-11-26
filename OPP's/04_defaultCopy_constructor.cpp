//start
#include <iostream>
using namespace std;
//Employee Class is here
class Employee
{
public:
    int id;
    string name;
    int age;
    string address;
    //Default Contructer
    Employee()
    {
        cout << "Default constructor"<<endl;
    }
    //Parametries Constructor
    Employee(int i, string n, int ag, string ad)
    {
        cout << "Parameterized constructer"<<endl;
        id = i;
        name = n;
        age = ag;
        address = ad;
        if (age > 18)
        {
            age = ag;
        }
        else
        {
            age = -1;
        }
    }
    //Default copy constructor
    Employee(Employee &a)
    {
        cout << "Default copy constructor" << endl;

        a.id = id;
        a.age = age;
        a.name = name;
        a.address = address;
    }
    void displayInfo()
    {
        cout << "id:" << id << endl;
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "Address:" << address << endl;
    }
    
};

//Main function is here
int main(int argc, char const *argv[])
{
    Employee a(2, "ali", 17, "24 w/b Vehari");
    //a.displayInfo();
    Employee b;
    Employee c = a;
}
//end