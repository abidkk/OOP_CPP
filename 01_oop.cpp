#include <iostream>
using namespace std;

class students{
    public:
    string name;
    int age;
};

int main(){

// Object / Instance
students a;
a.name = "Abid";
a.age = 24;

// Object / Instance
students b;
b.name = "Nasir";
b.age = 31;

cout << a.name << " " << a.age << endl;
cout << b.name << " " << b.age << endl;

return 0;
}