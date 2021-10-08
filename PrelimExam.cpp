#include <iostream>
#include <string>

using namespace std;

int main(){
    string employeeName, employeeId, payday;
    const double wtTax = 0.12;
    int hrs;
    double rate_hr, grosspay, netpay, tax;
    const double phl = 150, sss = 250, pgb = 200;

    cout << "Employee Name: ";
    getline (cin,employeeName);
    cout << "Employee Number: ";
    cin >> employeeId;
    cout << "Date of Payday: ";
    cin >> payday;
    cout << endl;

    cout << "Hourly Payrate: ";
    cin >> rate_hr;
    cout << "Hours Worked: ";
    cin >> hrs;
    cout << endl;

    grosspay = rate_hr * hrs;
    tax = grosspay * wtTax;
    netpay = grosspay - (tax + phl + sss + pgb);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "You earned " << grosspay << " working a total of " << hrs << " hours" << endl;
    cout << "Gross Pay:                             " << grosspay << endl;
    cout << "\t\t   DEDUCTIONS" << endl;
    cout << "Withholding Tax:                       " << tax << endl;
    cout << "Philhealth:                            " << phl << endl;
    cout << "SSS:                                   " << sss << endl;
    cout << "Pagibig:                               " << pgb << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Net Pay:                               " << netpay << endl;
    cout << endl;

    if(netpay < 5000){
        cout << "Employee Status: Contractual" << endl;
    }
    else if (netpay >= 5000 && netpay <= 10000){
        cout << "Employee Status: Probationary" << endl;
    }
    else{
        cout << "Employee Status: Regular" << endl;
    }

    return 0;
}