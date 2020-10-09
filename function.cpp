#include <iostream>
#include <cmath>
#include"function.h"
using namespace std;


void showMenu ()
{
cout<<" 1. ADD"<<endl;
cout<<" 2. DIVIDE" <<endl;
cout<<" 3. SUBTRACT" <<endl;
cout<<" 4. MULTIPLY" <<endl;
cout<<" 5. SQUAREROOT" <<endl;
cout<<" CTRL+C to exit" <<endl;
}

 

int getOption (int selection)
{
cin>>selection;
return selection;
}


void getNumbers(double& num1, double& num2)
{
cout<<"Enter two numbers: ";
cin>>num1 >>num2;
}

 
int addNumbers(double num1, double num2, double& sum)
{
sum=num1+num2;
cout <<"sum is " << sum << endl;
return sum;
}

 
int divideNumbers(double num1, double num2, double& sum)
{
sum=num1/num2;
cout << "division is " << sum << endl;
return sum;
}


int subtractNumbers(double num1, double num2, double& sum)
{
    sum=num1-num2;
cout <<"subtraction is " << sum << endl;
    return sum;
}


int multiplyNumbers(double num1, double num2, double& sum)
{
    sum=num1 * num2;
cout <<"multiplication is " << sum << endl;
    return sum;
}

 

void displayResults(double num1, double num2, double& sum)
{
    cout<<num1 << " + " <<num2 << " = " <<sum <<endl;
}

double getSquareRoot(double num1)
{
    cout<<"squareroot is " <<sqrt(num1);
    return num1;
}

void getNumber(double& num1)
{
cout<<"Enter the number: ";
cin>>num1;
}