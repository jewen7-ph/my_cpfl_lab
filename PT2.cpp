#include <iostream>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct <char> {
    protected:
        string do_grouping() const { return "\003"; }
};  

// First function prototypes
    void promptAndWait();

/* Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
void dollarsToPeso (float rate, double dollar );
void pesoToDollars (float rate, double peso );
int ans;
int main()
{
    //Declare the variables for the user input.
    float rate = 50.73; // $1 = 50.73 Pesos
    double dollarsIn;
    double pesoIn;
    int ch;
    
    do
    {
        system("cls");
        cout << endl;
        entrance:
        cout << " \nDollar to Peso Conversion App" << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                cout << "$1 = PHP 50.73" << endl;
                cout << "Enter Amount in Dollar(s): ";
                cin >> dollarsIn;
                dollarsToPeso(rate, dollarsIn); // Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 2:
            {
                system("cls");
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "1 PHP = $0.02" << endl;
                cout << "Enter Amount in Peso(s): ";
                cin >> pesoIn;
                pesoToDollars(rate, pesoIn); // Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 3:
            {
                cout << "Conversion App Terminated \nThank you for using the app!";
                break;
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                goto entrance;
                break;
            }
        }
    }while(ans == 1);   
return 0;
}
// Define the promptAndWait() function.
void promptAndWait()
{
    cout << "Do you want to convert again? " << endl;
    cout << "[1] Yes " << endl;
    cout << "[2] Exit "<< endl;
    cin >> ans;
}

// Define the dollarsToPeso function.
void dollarsToPeso (float rate, double dollar = 0)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout << "\n$" << dollar << " US = " << (rate * dollar) << " Pesos. \n";
}

//Define the pesoToDollar Function
void pesoToDollars (float rate, double peso = 0)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout << "\nP" << peso << " PHP = " << (peso / rate) << " Dollars. \n";
}   