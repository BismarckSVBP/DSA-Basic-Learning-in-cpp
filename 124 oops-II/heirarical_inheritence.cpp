// run ignor error

#include <iostream>
using namespace std;

class fruits
{
public:
    string name;
};
class pineapple : public fruits
{
public:
    int weight;
};
class mango : public fruits
{
public:
    int weight;
};

int main()
{
    mango alpansho;
    pineapple black;

    cout << black.name << " " << alpansho.name << " " << black.weight << " " << alpansho.weight << endl;

    return 0;
}

// //output

//  -2 6422280