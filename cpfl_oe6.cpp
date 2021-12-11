#include <iostream>

using namespace std;

void SearchingArray();
void AscendingArray();
void DescendingArray();
void PromptAndWait();
int ans = 1;

int main(){
    int ch;

    do{
        system("cls");
        cout << "<< Array Handler >>" << endl;
        cout << "[1] Searching Array" << endl;
        cout << "[2] Ascending Array" << endl;
        cout << "[3] Descending Array" << endl;
        cout << "[4] Exit Program" << endl;
        cin << ch;

        switch(ch){
            case 1:{
                SearchingArray();
                PromptAndWait();
                break;
            }
            case 2:{
                AscendingArray();
                PromptAndWait();
                break;
            }
            case 3:{
                DescendingArray();
                PromptAndWait();
                break;
            }
            case 4:{
                cout << "Application Terminated, Thank You!";
                return 0;
            }
        }
    }while(ans==1);
return 0;
}

void SearchingArray(){
    int size, x, y;
    int score[100];

    cout << "Enter array size: ";
    cin >> size;

    for(int x = 0; x < size; x++){
        cout << "Enter Score: [" << x << "]: ";
        cin >> score[x];
    }
    for(int y = 0; y < size; y++){
        cout << "Unsorted Scores: [" << y << "] " << score[y] << endl;
    }
}

void AscendingArray(){
    int arr[100];
    int size, i, j, temp;
 
    // Reading the size of the array
    cout<<"Enter size of array: ";
    cin>>size;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    //Sorting an array in ascending order
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void DescendingArray(){
    int numbers[ARRAY_SIZE], i ,j ,temp;

	cout<<"Simple C++ Example Program for Sorting Descending Order In Array\n";

	// Read Input
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }
        
    // Array Sorting - Descending Order
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] < numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < ARRAY_SIZE; ++i)
        cout<<numbers[i]<<endl;
        
    getch();
}
void PromptAndWait(){
   cout << "\nDo you want to try again"<< endl;
   cout << "1 = to continue" << endl;
   cout << "0 = to exit" << endl;
   cin >> ans;
}