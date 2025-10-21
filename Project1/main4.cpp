#include <iostream>

using namespace std; //use the entiere std namespace

int main(){

    int num1;
    int num2;
    double num3;

    //part1

    cout << "Enter an integer: ";
    cin >> num1;
    cout << "You entered: " << num1 << endl;

    //part2

    cout << "Enter a first integer: ";
    cin >> num1;

    cout << "Enter a second integer: ";
    cin >> num2;

    cout << "You enterd " << num1 << " and " << num2 << endl;

    //part3

    cout << "Enter 2 integers separated with a space: ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;

    //part4

    cout << "Enter a double: ";
    cin >> num3;
    cout << "You erntered: " << num3 << endl;

    //part5

    cout << "Enter an integer: ";
    cin >> num1;
    cout << "Enter a double: ";
    cin >> num3;

    cout << "You integer is: " << num1 << endl;
    cout << "You double is: " << num3 << endl;


    return 0;

}