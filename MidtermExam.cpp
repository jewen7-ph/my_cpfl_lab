//Name: Alain Eleazar V. Eusebio
//Section: BSCS 1-1
//Description: Midterm Exam
//Date: November 9, 2021

#include <iostream>
using namespace std;

void meterToKilometer (double meter, double km = 1000);
void meterToCentimeter (double meter, double cm = 100);
void meterToMillimeter (double meter, double mm = 1000);
void meterToMicrometer (double meter, double mc = 1000000);
void PromptandWait();
int ans = 1, ch;

int main(){

    double meterIn;

    do{
        system("cls");
        entrance:
        cout << "\n<< Meter Conversion App >>" << endl;
        cout << "[1] Convert Meter to Kilometer" << endl;
        cout << "[2] Convert Meter to Centimeter" << endl;
        cout << "[3] Convert Meter to Millimeter" << endl;
        cout << "[4] Convert Meter to Micrometer" << endl;
        cout << "[5} End Application" << endl;
        cin >> ch;

        switch(ch){

            case 1:{
                system("cls");
                cout << " \n<< Meter to Kilometer >>" << endl;
                cout << "1 Meter = Kilometer 0.0001" << endl;
                cout << "Enter value of Meter: ";
                cin >> meterIn;
                meterToKilometer (meterIn);
                PromptandWait();
                break;
            }
            case 2:{
                system("cls");
                cout << " \n<< Meter to Centimeter >>" << endl;
                cout << "1 Meter = 100 Centimeter" << endl;
                cout << "Enter value of Meter: ";
                cin >> meterIn;
                meterToCentimeter (meterIn);
                PromptandWait();
                break;
            }
            case 3:{
                system("cls");
                cout << " \n<< Meter to Millimeter >>" << endl;
                cout << "1 Meter = 1000 Millimeter" << endl;
                cout << "Enter value of Meter: ";
                cin >> meterIn;
                meterToMillimeter (meterIn);
                PromptandWait();
                break;
            }
            case 4:{
                system("cls");
                cout << " \n<< Meter to Micrometer >>" << endl;
                cout << "1 Meter = Micrometer 1000000" << endl;
                cout << "Enter value of Meter: ";
                cin >> meterIn;
                meterToMicrometer (meterIn);
                PromptandWait();
                break;
            }
            case 5:{
                cout << "Application Ended, Thank you for using the App";
                return 0;
            }
            default:{
                cout << "\nInvalid Input, Please follow the options presented" << endl;
                goto entrance;
                break;
            }
        }
    }while (ans==1);
return 0;
}
void meterToKilometer (double meter, double km){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << meter << " Meter = " << meter / km << " Kilometer";
}

void meterToCentimeter (double meter, double cm){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << meter << " Meter = " << meter * cm << " Centimeter";
}

void meterToMillimeter (double meter, double mm){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << meter << " Meter = " << meter * mm << " Millimeter";
}

void meterToMicrometer (double meter, double mc){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << meter << " Meter = " << meter * mc << " Micrometer";
}

void PromptandWait(){
   cout << "\nDo you want to try again"<< endl;
   cout << "1 = to continue" << endl;
   cout << "0 = to exit" << endl;
   cin >> ans;
}

