#include <iostream>

using namespace std;
// My class
class MyClass
{
    bool gender; // Data Members of a class

public:
    string name;
    int id;
    string getgender(bool gen) // Member function of class
    {
        if (gen == true)
        {
            return "Male";
        }
        else
        {
            return "Female";
        }
    }
};
int main(int argc, char const *argv[])
{

    MyClass entity1;
    // Object instances attributes
    entity1.id = 1;
    entity1.name = "Ali Hasan";
    cout<<"id:"<<entity1.id<<endl;
    cout<<"Name:"<<entity1.name<<endl;
    cout<<"Gender:" << entity1.getgender(1)<<endl;
    //
}