//run on online compiler


#include <iostream>
using namespace std;
void fun(int &value)
{
    value++;
}

void fun2(int *num)
{
    ++(*num);
}


//passing pointer as pass by reference but in normal way we use double pointer concept to perform this
void fun3(int *&num)//we can not write &* it is show wrong
{
    *num = *num + 1;
    num = num + 1;
}
int main()
{

    int a = 5;

    fun(a);

    cout << a << endl;

    fun2(&a);

    cout << a << endl;

    int *p = &a;

    cout << "Before function call the address store in p : " << p << endl;


    fun3(p);


    cout << "After function call the address store in p : " << p << endl;
    cout << a << endl;


    return 0;
}