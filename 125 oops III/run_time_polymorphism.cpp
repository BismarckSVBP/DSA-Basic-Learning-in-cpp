

#include <iostream>
using namespace std;

class animal
{

public:
    animal()
    {
        cout << "This animal constructor." << endl;
    }
    // void speak()
    virtual void speak()
    {
        cout << "speaking" << endl;
    }
};
class dog : public animal
{
public:
    dog()
    {
        cout << "This dog constructor." << endl;
    }
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    // animal *A = new animal();//animal's speak function will be call//animal constructor will be called
    // A->speak();




    // dog *a = new dog();//dog's speak function will be called//both constructor will be called
    // a->speak();




    // // upcasting

    // animal *B = new dog(); // parent class speak function will be called //both constructor will be called
    // // but if we use virtual keyword in data type of parent's class then child's class function will be called

    // B->speak();






    // downcasting

    dog *h = (dog *)new animal(); // o/p -> speaking //parent's speak function will be called//animal constructor will be called
    h->speak();
    return 0;
}

////note-a> if in the main function we call the funtion through upcasting or downcasting without virtual keyword in the parent class then it output will be belongs to that class function call which pointer is made

////note-b> if in the main function we call the funtion through upcasting or downcasting with virtual keyword in the parent class then it output will be belongs to that class's function call which object is made with the new keyword.

////note-1> if in the main function we call the funtion through upcasting without virtual keyword in the parent class then it output will be belongs to parent class function calls

////note-2> if in the main function we call the funtion through upcasting with virtual keyword in the parent class then it output will be belongs to child class function calls

// note related to constructor-> when we make different variation of object creation dynamically then the type of created object will be depends on right side of the objects means new keyword side