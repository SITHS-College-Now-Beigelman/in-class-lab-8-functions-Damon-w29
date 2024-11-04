// Damon Wu 
// 11/4/2024
// Lecture - 8 

#include <iostream>
#include <cmath>
using namespace std;

// part 1 
    double math(double x)
{
    double squareroot;
    squareroot = sqrt(x);

    double power;
    power = (x, 4);

    double floors;
    floors = floor(x);
}
int main(){
    double number;
    cout <<"Input a number. \n";
    cin >> number; 
}
// part 2 
int doubleMultiply(int a, int b)
{
    int product;
    product = a *b * 2;
    return product;
}
int main(){

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "twice the product of the number is: " 
            << doubleMultiply(num1, num2) << endl;
    return 0;
    /*
    Enter two integers: 10 11
    twice the product of the number is: 220
    Press any key to continue . . .
    */
}