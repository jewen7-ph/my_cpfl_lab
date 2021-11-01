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
void dollarsToPeso(float rate, unsigned dollars = 1 );

int main()
{
    //Declare the variables for the user input.
    float conversionRate = 50.73; // $1 = 50.73 Pesos
    unsigned dollarsIn;
    int ch, ans=0;

    do
    {

        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                dollarsToPeso(conversionRate); // Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> dollarsIn;
                dollarsToPeso(conversionRate, dollarsIn); // Show the conversion by calling the function.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 2:
            {
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "\nYour code here! \nCreate your own function for this problem set" << endl;
                promptAndWait();
                break;
            }

            case 3:
            {
                cout << "Conversion App Terminated \nThank you for using the app!";
                promptAndWait();
                return 0;
            }
            case 4:
            {
                cout << "Invalid Input!";
                promptAndWait();
            }
        }
    }
    // Define the promptAndWait() function.
while(ans == 0);
{ 
void promptAndWait();
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}

// Define the dollarsToPeso function.
void dollarsToPeso (float rate, unsigned dollar); 
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$" << dollarsIn << " US = " << (conversionRate * dollarsIn) << " Pesos. \n";

}   