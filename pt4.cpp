//Name: Alain Eleazar V. Eusebio
//Section: BSCS 1-1
//Date: Dec 6, 2021 
//Performance Task 4: Case Study (Game: Rock, Paper, Scissor)

#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

char cChoice[5];
char uChoice;

void PlayGame();
void getComputerOption();
void getUserOption();
void showSelectedOption(char option);
void Scoreboard();
void Delete();
char TieGame();
void PromptAndWait();

int main(){
    int ch;

    do{
        system("cls");
        menu:
        cout << "Rock, Paper Scissor Game" << endl;
        cout << "[1]-Play Game" << endl;
        cout << "[2]-Scoreboard" << endl;
        cout << "[3]-Delete Data" << endl;
        cout << "[4]-Exit Game" << endl;
        cout << "Select option: " << endl;
        cin >> ch; 

        switch(ch){

            case 1:{
                PlayGame();
                PromptAndWait();
                break;
            } 

            case 2:{
                Scoreboard();
                PromptAndWait();
                break;
            }

            case 3:{
                Delete();
                PromptAndWait();
                break;
            }

            case 4:{
                cout << "Game Terminated. Thank you!";
                return 0;
            }

            default:{
                cout << "Please refer to the options available. Try again.";
            }
        }
    }while(true);
return 0;
}

void PlayGame(){
    string Name;

        getComputerOption();
        cout << "What is your Name? " << endl;
        cin.ignore();
        getline(cin,Name);
        int wins = 5;
        int index = 0;
        int round = 1;
        checkpoint1:
            cout << "Round " << round << " of 5" << endl;
            getUserOption();
            system("cls");
            if (uChoice == 'r' && cChoice[index] == 'p'){
                cout << "Computer Wins! Paper wraps Rock."<< endl;
                round++;
                wins--;
            }
            else if (uChoice == 'p' && cChoice[index] == 's'){
                cout << "Computer Wins! Scissors cut Paper."<< endl;
                round++;
                wins--;
                
            }
            else if (uChoice == 's' && cChoice[index] == 'r'){
                cout << "Computer Wins! Rock smashes Scissors."<< endl;
                round++;
                wins--;
            }
            else if (uChoice == 'r' && cChoice[index] == 's'){
                cout << "You Win! Rock smashes Scissors."<< endl;
                round++;
            }
            else if (uChoice == 'p' && cChoice[index] == 'r'){
                cout << "You Win! Paper wraps Rock."<< endl;
                round++;
            }
            else if (uChoice == 's' && cChoice[index] == 'p'){
                cout << "You Win! Scissors cut Paper."<< endl;
                round++;
            }
            else{
                cout << "Tie. Play again." << endl;
                cChoice[index] = TieGame();
                index--;
            }
            index++;
            
            if(index < 5){
            
                goto checkpoint1;
            }
            cout << "Game is Finished, Check your score at the scoreboard option " <<  endl;

            ofstream File;
        File.open("Scoreboard.txt", ios:: app);

        File << "----------------------------------------" << endl;
        File << "Player Name: " << Name << endl;
        File << "Score: " << wins << endl;
        File << "----------------------------------------" << endl; 
}

void Scoreboard(){
    string data;

        ifstream ReadFile("Scoreboard.txt");

        while (getline (ReadFile, data)) 
            {
                cout << data << endl;
            }

            ReadFile.close();
}

char TieGame(){ //In case of a tie game, round reset
    srand(time(0));
    int num = (rand() % 3) + 1;
 
        if(num==1){
            return 'r'; 
        }          
        else if(num==2)
        {
            return 'p';
        }
        else
        {
            return 's';
        }  
}
 
void getComputerOption(){ // random hand generator for cChoice
    srand(time(0));
    // Random number
    for (int i=0; i<5; i++)
    {
        int num = (rand() % 3) + 1;
 
        if(num==1){
            cChoice[i] = 'r'; 
        }          
        else if(num==2)
        {
            cChoice[i] = 'p';
        }
        else
        {
            cChoice[i] ='s';
        }     
    }
}
 
void getUserOption(){ // hand selection for uChoice
    
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Welcome Player " << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> uChoice;
    
    while (uChoice!='r' && uChoice!='p' && uChoice!='s' )
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> uChoice;
    }
}

void Delete(){
    fstream Clear;

    Clear.open("Scoreboard.txt", ios::out | ios::trunc); 
    cout << "Data has been Terminated!" << endl; 
}

void PromptAndWait()
{
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}

 
