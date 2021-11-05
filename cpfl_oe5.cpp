#include<iostream>
#include<string>

using namespace std;

//For the user if they want to try again or exit the program
void promptAndWait();
void reverseWord();
void reverseCode();
int ans=1,pass,i,k=0;
char ch[30];

int main(){
   do{
   system("cls");
        cout << endl;
        entrance:
        cout << "\n<< Password/Passcode Handler 2021 >>" << endl;
        cout << "\n[1] Reverse a String" << endl;
        cout << "[2] Reverse an Unsigned Integer" << endl;
        cout << "[3] Exit " << endl;
        cout << "Select Program : ";
        cin >> pass;

        switch(pass){
            
            case 1: // For Reversing a Password
            {
            system("cls");
            cout << "Enter a Word : ";
            cin.ignore();
            cin.getline(ch,30);
            reverseWord();
            promptAndWait();
            break;
            }

            case 2: // For Reversing a Passcode
            {
            system("cls");
            cout << "Enter a Number [0-9]: ";
            cin.ignore();
            cin.getline(ch,30);
            reverseCode();
            promptAndWait();
            break;
            }

            case 3:{ // For Terminating the App
               cout << "Application Terminated. Thank you!";
               return 0;
            }
            default:{
               cout << "Invalid input";
               goto entrance;
            break;
            }
        }
   }while(ans==1);
return 0;
}

void reverseWord()
{
    for (i=0; ch[i]!='\0';i++)
   {  
      k++;
   }
    cout << "Reverse String: ";

    for (i=k-1;i>=0;i--)
   {
      cout << ch[i];
   }
}

void reverseCode(){

    for (i=0; ch[i]!='\0';i++)
    {  
        k++;
    }
    cout << "Reverse String: ";

    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
}

void promptAndWait()
{
   cout << "\nDo you want to try again"<< endl;
   cout << "1 = to continue" << endl;
   cout << "0 = to exit" << endl;
   cin >> ans;
}