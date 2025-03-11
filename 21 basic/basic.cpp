// bitwise operator -> jo operator hum bit level par laga paaye use bitwise operator kahte

#include <iostream>
using namespace std;

int main()
{
    // // operator AND( & ),OR( | ),NOT( ~ ),NOR( ^ )
    // bool a = false;
    // bool b = true;
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (~a) << endl;// in this tilda(~) is used at bit level
    // cout << ~(a) << endl;// in this tilda(~) is used at number
    // cout << (a ^ b) << endl;
    // cout << (11 & 9) << endl;
    // cout << (8 & 9) << endl;







    // left shift


    // left shift(It is used to add another zero in the last of binary repersentation of the number & resultant of the binary number gives the output.) 
     //Note - In this o/p is the multiple of 2 is the power of number of left shift


    // int c =4;
    // c =c << 3;
    // cout << c << endl;


    // int d =-1;
    // d =d << 3;
    // cout << d << endl;
    

    // int e =1;//check it is gives garbage or not?
    // e =e << -3;
    // cout << e << endl;


    //right shift

    // right shift((It is used to remove a number from the last of binary repersentation of the number & add a zero(0) in the first of binary representation & resultant of the binary number gives the output.))

    //Note - In this o/p is the division of 2 is the power of number of  right shift
    int f = 8;
    f =f >> 2;
    cout << f << endl;




    int g =-27;
    g =g >> 1;
    cout << g << endl;

    int h = 9;
    h =h >> -2;
    cout << h << endl;

    return 0;
}
