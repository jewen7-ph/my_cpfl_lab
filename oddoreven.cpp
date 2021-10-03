#include <iostream>

using namespace std;

int main ()
{
    int num, dnum;
    int i = 0;

    cout << "Enter your range of numbers ";
    cin >> num;
    
    while (i < num)
    {
        cout << "Please Enter The Number : ";
        cin >> dnum;
        if(dnum %2 == 0)
        {
            cout << "Your Number is even" << endl;
        }
        else if (dnum == 0){
            cout << "Your Number is even" << endl;
        }
        else 
        {
            cout << "Your Number is odd" << endl;
        }
        i++;
    }
    return 0;
}