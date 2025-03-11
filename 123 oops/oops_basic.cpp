

#include <iostream>
using namespace std;

// creating of a class

class animal
{
};
class animal2
{
    // state or properties
private:
    int weight;
    int salary;

public:
    int age;
    char gender;
    string name; // 24 bytes ka space in VS code//32 bytes in online compiler

    // object constructer creation
    // by default constructer
    animal2()
    {
        this->age = 12;
        this->gender = 'T';
        this->salary = 10000;
        weight = 103;
        this->name = "Mansa";
        cout << "I am a constructer." << endl;
    }

    // parametrised constructer
    animal2(int age, string naam)
    {
        this->age = age;

        this->name = naam;
        cout << "I am a constructer2." << endl;
    }

    animal2(int age, int deg)
    {
        this->age = age;

        this->weight = deg;
        cout << "I am a constructer-3." << endl;
    }

    // copy constructor
    animal2(animal2 &obj)
    {
        this->age =
            this->age = obj.age;
        this->gender = obj.gender;
        this->salary = obj.salary;
        weight = obj.weight;
        this->name = obj.name;
        cout << "I am a copy constructor." << endl;
    }
    // funtions or behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    // to access a private properties outside the scope we use getter & setter

    // getter -> get the values or properties

    int getWheight()
    {
        return weight;
    }

    // setter -> set the values or properties

    int seWhieght(int weight) // int setWhieght(int w)
    {
        // (*this).age = 15;
        this->weight = weight; // weight = w;  //(this).weight = weight;
    }
    ~animal2()
    {
        cout << " i am a destructor" << endl;
    }
};

int main()
{
    // // access the properties

    // animal2 ramesh; // declearing object ramesh

    // cout << "The size of class ramesh is : " << sizeof(ramesh) << endl;
    // // ramesh.name = "Puppy";
    // // ramesh.age = 4;
    // // // ramesh.weight = 23; // shows error due to private access modifier

    // // cout << "The age of animal is : " << ramesh.age << endl;
    // // cout << "The name of animal is : " << ramesh.name << endl;

    // // cout << "The size of class animal is : " << sizeof(animal) << endl;
    // // cout << "The size of class animal is : " << sizeof(animal2) << endl;

    // // ramesh.eat();

    // // ramesh.sleep();

    // // getting a private member outside scope
    // //  set the value of weight
    // ramesh.seWhieght(101);
    // // get the value of weight
    // cout << "The weight of ramesh is : " << ramesh.getWheight() << endl;

    // // DMA
    // animal2 *suresh = new animal2;

    // (*suresh).age = 15;

    // suresh->gender = 'M';

    // cout << "The age of suresh is : " << suresh->age << endl;

    // cout << "The gender of suresh is : " << (*suresh).gender << endl;

    // suresh->eat();

    // if we create the object then constucter will automatically called

    // accessing the by default constructer
    animal2 sahil;                 // statically creating an object
    animal2 *suhail = new animal2; // dynamically creating an objects
    delete suhail;
    // accessing the parametrized constructer
    animal2 sahilo(10, "mulla");
    animal2 *suhailo = new animal2(90, 100);

    // free memory of a dynamic alloc1ated variable
    delete suhailo;

    // access the copy constructer

    animal2 sunilji, sunilji1;
    // method-1
    animal2 sunil(sunilji);
    // methode-2
    animal2 sunil1 = sunilji1;
    return 0;
}
