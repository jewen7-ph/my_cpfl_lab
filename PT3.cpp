//Name: Alain Eleazar Eusebio
//Section: BSCS 1-1
//Activity: File Input/Output Implementation
//Date: November 20, 2021

#include <iostream>
#include <fstream>
using namespace std;

void Input();
void Show();
void Delete();
void PromptAndWait();
int ans = 1;

int main(){
    int ch;

    do{
        system("cls");
        cout << "<<-Employee Salary Data App->>" << endl;
        cout << "[1]-Input Employee Data" << endl;
        cout << "[2]-Input Show Data" << endl;
        cout << "[3]-Input Delete Data" << endl;
        cout << "[4]-Terminate Application" << endl;
        cin >> ch;

        switch(ch){

            case 1:{
                Input();
                PromptAndWait();
                break;
            } 

            case 2:{
                Show();
                PromptAndWait();
                break;
            }

            case 3:{
                Delete();
                PromptAndWait();
                break;
            }

            case 4:{
                cout << "Thank you for using the application.";
                return 0;
            }

            default:{
                cout << "Invalid Input! Please Try Again.";
            }
        }
    }while(ans==1);
return 0;
}

void Input(){
string EmployeeName; 
int EmployeeId;
double rateWork, hourWork, GrossP, NetP;
float Tax1 = 0.05, Tax2 = 0.10, Tax3 = 0.12;

    cout << "Employee Name: ";
    cin.ignore();
    getline (cin,EmployeeName);
    cout << "Employee ID: ";
    cin >> EmployeeId;
    cout << "How many hours do you work in a month? ";
    cin >> hourWork;
    cout << "How much do you earn in an hour? ";
    cin >> rateWork;

    GrossP = hourWork * rateWork;

    if(GrossP < 20000){
        NetP = GrossP - (GrossP * Tax1);
    }

    else if(GrossP >=20000 && GrossP <= 30000){
        NetP = GrossP - (GrossP * Tax2);
    }

    else{
        NetP = GrossP - (GrossP * Tax3);
    }

    ofstream File;
        File.open("SavedDataSalary.txt", ios:: app);

    File << "Employee Name: " << EmployeeName << endl;
    File << "Employee ID: " << EmployeeId << endl;
    File << "Hours worked in a month: " << hourWork << endl;
    File << "Rate per hour:" << rateWork << endl;
    File << "Net Pay: " << NetP << endl;
}    

void Show(){
    string data;

    ifstream ReadFile("SavedDataSalary.txt");

    while (getline (ReadFile, data)) 
    {
        cout << data << endl;
    }

    ReadFile.close();
}

void Delete(){
    fstream Clear;

    Clear.open("SavedDataSalary.txt", ios::out | ios::trunc); 
    cout << "Data has been Terminated!" << endl; 
}

void PromptAndWait(){
   cout << "\nDo you want to try again"<< endl;
   cout << "1 = to continue" << endl;
   cout << "0 = to exit" << endl;
   cin >> ans;
}
