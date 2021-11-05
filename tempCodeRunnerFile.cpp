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
