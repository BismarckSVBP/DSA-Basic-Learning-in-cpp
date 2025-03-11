

#include <iostream>
using namespace std;



//single level inheritence where one parent class and one child class

// childOfstudents is a students


// parent class
class students
{

public:
    int age;
    string name;
    char gender;

public:
    void eat()
    {
        cout << "Eating " << endl;
    }

    int getAge()
    {
        return this->age;
    }
    int setAge(int age)
    {
        this->age = age;
    }
};

// child class
// parent main jo public wahi child main public banega aur jo private hai woh private banega

class childOfstudents : public students
{
public:
    void print()
    {
        cout << this->age << endl;
    }
};

int main()
{
    students Anuj;
    Anuj.setAge(24);
    cout << "The age of Anuj is : " << Anuj.getAge() << endl;

    childOfstudents ram;
    ram.setAge(40);
    cout << "The age of Ram is : " << ram.getAge() << endl;

    // accessing outside
    cout << ram.age << endl;

    // acessing inside
    ram.print();

    return 0;
}
