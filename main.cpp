#include <iostream>
#include <cmath>
#include"function.h"
using namespace std;

int main ()
{
    int a=0;
    double num1;
    double num2;
    double Result;
    
    while (true)
    {
        showMenu();
        cout<<"Enter your Choice ";
        cin>>a;
        
        switch(a)
        {
            case 1:
            getNumbers(num1, num2);
                addNumbers(num1, num2, Result);
                break;
            case 2:
                getNumbers(num1, num2);
                divideNumbers(num1, num2, Result);
                break;
            case 3:
                getNumbers(num1, num2);
                subtractNumbers(num1, num2, Result);
                break;
            case 4:
                getNumbers(num1, num2);
                multiplyNumbers(num1, num2, Result);
                break;
            case 5:
                getNumber(num1);
                getSquareRoot(num1);
                break;
            default:
                
                break;
        }
        cout<<endl;
        cout<<endl;
    }
    
    
}