//Name: Alain Eleazar V. Eusebio
//Section and Year : BSCS 1-1

#include<iostream>
#include<string>

using namespace std;

int main(){
    string employee_fname, employee_lname, employee_id;
    int num_hours_work;
    double rate_per_hour;
    double gross_pay;
    double net_pay;

//Basic Information to the employee 
    cout << "What is your name? ";
    cin >> employee_fname >> employee_lname; 
    cout << "What is your Employee ID? ";
    cin >> employee_id;
    cout << "How many hours do you work in a month? ";
    cin >> num_hours_work;
    cout << "How much do you earn in an hour? ";
    cin >> rate_per_hour;

    gross_pay = num_hours_work * rate_per_hour;

    if(gross_pay <20000) {
        net_pay = gross_pay - (gross_pay * .05); //5% Tax for less than 20000 salary
        cout << "Trainee" << endl;
    }
    else if(gross_pay >= 30000 && gross_pay <= 40000 ){ 
        net_pay = gross_pay - (gross_pay * .10); //10% Tax for salary ranging from 30000 to 40000
        cout << "Probationary" << endl;
    }
    else{
        net_pay= gross_pay - (gross_pay * .12); //12% Tax for salary greater than 40000
        cout << "Regular" << endl;
    }
return 0;
}