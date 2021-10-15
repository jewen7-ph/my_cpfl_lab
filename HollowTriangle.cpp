#include <iostream>

using namespace std;

int main(){
    
    int i, a , s, rows;
    
    cout << "Enter Number of Rows: ";
    cin >> rows;

    for (i=1; i<=rows; i++)
    {
        for(s=i; s < rows; s++)
        cout <<" "; 
        for(a=1; a<=(2*rows-1); a++) 
        {
            if (a==1 || a==2*i-1 || i==rows)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        for(a=1; a<=(2*rows-1); a++) 
        {
            if (a==1 || a==2*i-1 || i==rows)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        for(a=1; a<=(2*rows-1); a++) 
        {
            if (a==1 || a==2*i-1 || i==rows)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout << endl;
    
    }
    
    return 0;
}
