#include <iostream>
using namespace std;

class students
{
public:
    string name;
    int age;

    void printInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{

    students a;
    a.name = "John";
    a.age = 42;

    students b;
    b.name = "Bob";
    b.age = 43;

    a.printInfo();
    b.printInfo();

    return 0;
}