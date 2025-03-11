//run ignor error

#include <iostream>
using namespace std;

class fruits
{
public:
    string name;
};

class mango : public fruits
{
public:
    int weight;
};

class alphanso : public mango
{
public:
    int sugerlevel;
};

int main()
{
    alphanso a;
    cout << a.name << " " << a.weight << " " << a.sugerlevel << endl;

    return 0;
}

// //output

//  -2 6422280 