#include <iostream>

using namespace std;

int main ()
{
    int num, dnum;
    int i = 0;

    cout << "Enter your range of number(s): ";
    cin >> num;
    cout << "Enter the number(s): ";

    while (i < num)
    {
        cin >> dnum;
        if(dnum %2 == 0)
        {
            cout << dnum << " is even" << endl;
        }
        else 
        {
            cout << dnum <<" is odd" << endl;
        }
        i++;
    }
    return 0;
}
