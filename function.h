#ifndef FUNCTION_H
#define FUNCTION_H
void showMenu ();
int getOption (int selection);
void getNumbers(double& num1, double& num2);
int addNumbers(double num1, double num2, double& sum);
int divideNumbers(double num1, double num2, double& sum);
int subtractNumbers(double num1, double num2, double& sum);
int multiplyNumbers(double num1, double num2, double& sum);
void displayResults(double num1, double num2, double& sum);
double getSquareRoot(double num1);
void getNumber(double& num1);
#endif