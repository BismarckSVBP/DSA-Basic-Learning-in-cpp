// run ignor error

#include <iostream>
using namespace std;

class A
{
public:
    int physics;
    A()
    {
        physics = 100;
    }
};
class B
{
public:
    int chemistry;
    int physics;
    B()
    {
        physics = 134;
        chemistry = 120;
    }
};

class C : public A, public B
{
public:
    int maths;
    C()
    {
        maths = 10;
    }
};

int main()
{
    C obj;
    cout << obj.A::physics << " " << obj.B::physics << " " << obj.chemistry << " " << obj.maths << endl;
 
    return 0;
}

// output->   1272973948 -2 6422280

// if physics in both then how compiler identify which physics is excuted(a or b) this problem is known as diamond problem

// to solve the diamond problem we use scope resolution operator
//   :: is scope resolution operator
