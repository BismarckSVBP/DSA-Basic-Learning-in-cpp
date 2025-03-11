#include <iostream>
using namespace std;
int Compare(string sentence1, string sentence2)
{
    if (sentence1.length() > sentence2.length())
    {
        return 1;
    }
    else if (sentence1.length() < sentence2.length())
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < sentence1.length(); i++)
        {
            if (sentence1[i] != sentence2[i])
            {
                if (sentence1[i] > sentence2[i])
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
            }
            
        }
        return 0;
    }
}
int main()
{
    string sentence1 = "aaaa";
    string sentence2 = "aaaa";
    int result = Compare(sentence1, sentence2);
    if (result == 0)
    {
        cout << "Both sentences are equal.";
    }
    else if (result == 1)
    {
        cout << "Sentences1 is greater.";
    }
    else
    {
        cout << "Sentences2 is greater.";
    }

    return 0;
}
