

#include <iostream>

using namespace std;

class students
{
    // perfect encapsulation
private:
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

int main()
{
    students Anuj;
    Anuj.setAge(24);
    cout << "The age of Anuj is : " << Anuj.getAge() << endl;
    return 0;
}
