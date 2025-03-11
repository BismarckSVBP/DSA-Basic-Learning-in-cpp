#include <iostream>
using namespace std;

int main()
{
    // // find
    // string sentence = "My name is Abhay Kumar Kasaudhan";
    // string findingElement = "Abyhay";
    // int result = sentence.find(findingElement);

    // if (result == string::npos)
    // {
    //     cout << "Not found";
    // }
    // else
    // {
    //     cout << "The starting index of findingElement is : " << result;
    // }

    // // replace
    // string sentence2 = "My name is Abhay Kumar Kasaudhan";
    // string target = "Bismarck";
    // cout << "Before replacing :" << sentence2 <<endl;
    // sentence2.replace(11, 5, target);

    // cout << "After replacing :" << sentence2 << endl ;

    // // erase
    string sentence3 = "My name is Abhay Kumar Kasaudhan";
    cout << "Before erasing : " << sentence3 << endl;

    sentence3.erase(11,5);

    cout << "After erasing : " << sentence3;

    // check empty
    // string sentence4 = "My name is Abhay Kumar Kasaudhan";

    // bool check = sentence4.empty();
    // if (check == 1)
    // {
    //     cout << "String is empty";
    // }
    // else
    // {
    //     cout << "String is not empty";
    // }

    // length
    // string sentence5 = "My name is Abhay Kumar Kasaudhan";

    // int length = sentence5.length();
    // cout << length;

    // substring
    // string sentence4 = "My name is Abhay Kumar Kasaudhan";
    // string str = sentence4.substr(11, 5);
    // cout << "The substring is : " <<str;

    // // //pop_back and push_back
    // // //puch_back() functions add ONLY one charcter in the last of the STRING & before the null character
    // string sentence5 = "My name is Abhay Kumar Kasaudhan";
    // sentence5.push_back('M');
    // cout << sentence5 << endl;

    // // // pop_back removes a charcter from the last of the string
    // sentence5.pop_back();
    // cout << sentence5 << endl;

    // // Compare
    // string sentence7 = "aaa";
    // string sentence8 = "aaaa";
    // int result = sentence7.compare(sentence8);
    // if (result == 0)
    // {
    //     cout << "Both sentences are equal.";
    // }
    // else if (result == 1)
    // {
    //     cout << "Sentences7 is greater.";
    // }
    // else
    // {
    //     cout << "Sentences8 is greater.";
    // }

    return 0;
}
