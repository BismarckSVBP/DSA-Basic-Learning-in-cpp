

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter no. of dimension pf matrix : " ;
    cin >> n;

      cout << "BA + ";
     cout << '[';
    for (int i = 1; i <= n; i++)
    {
        char c = char(i + 104);
       
        cout << '(' << c<< '-' << "LB" << i << ")";
        for (int j = i+1; j <= n; j++)
        {
            cout << "(" << "UB" << j << '-' << "LB" <<j << '+' <<1 << ')'; 
        } 
        if(i!=n)cout << '+';
    }
  cout << "] * width";
    return 0;
}