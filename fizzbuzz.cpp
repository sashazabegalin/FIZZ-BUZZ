#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
using namespace std;
int main(){
    
    
    cout << "== Fizz Buzz Deluxe ==" << endl;
    
    string userInput1 = "fu";
    string userInput2 = "bu";
    int num1 = 0;
    int num2 = 0;
    
    
    /// checks the user inputs to see if they are valid
    
    while ((!(userInput1.size() >= 3 && userInput1.size() <= 6)) || (!(userInput2.size() >= 3 && userInput2.size() <= 6)))
    {
        
        cout << "Enter a pair of words (each from 3-6 chars long): ";
        cin >> userInput1 >> userInput2;
        
    }
    do {
        cout << "Enter two different integers (between 2 and 15): ";
        cin >> num1 >> num2;
        
        
    }
    while (((!(num1 >= 2 && num1 <= 15)) || (!(num2 >= 2 && num2 <= 15)) || (num1 == num2)));
    
    
    /// this is where the out put begins
    
    cout << endl;
    
    for(int i=1;i<=100;i++){
        if((i % num1) == 0 && (i % num2) == 0)
        {
            cout << userInput1 << userInput2 << " ";
        }
        else if(i % num2==0)
        {
            cout<< userInput2 << " ";
        }
        else if(i % num1==0)
        {
            cout << userInput1 << " ";
        }
        else
        {cout<< i << " ";
            
        }
        
        if((i%10)==0)
        {
            cout << endl;
        }
    }
    
    cout << endl;
    
    for(int j=1;j<=100;j++){
        if((j % num1) == 0 && (j % num2) == 0)
        {
            cout << "#" << " ";
        }
        else if(j % num2==0)
        {
            cout<< "*" << " ";
        }
        else if(j % num1 == 0)
        {
            cout<< "+" <<" ";
        }
        else
        {cout<< "." << " ";
            
        }
        
        if((j%10)==0)
        {
            cout << endl;
        }
        
        
        
    }
    
    return 0;
}





