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
        cout << "Default constructor";
    }   
    //Parametries Constructor
    Employee(int i, string n, int ag, string ad)
    {
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
    Employee emp;

    Employee emp1(2, "ali", 17, "24 w/b Vehari");
    emp1.displayInfo();
    return 0;
}
//end