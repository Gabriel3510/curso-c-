#include <iostream>

using namespace std; //use the entiere std namespace
/*
using std::cout;
using std::cin;
using std::endl;

*/

int main(){

    int favoriteNumber; // this is where my favorite number is stored

    cout << "Enter your favorite number between 1 and 100: ";

    cin >> favoriteNumber;

    cout << "Amazing!! That's my favorte number is " << favoriteNumber << " too!" << endl;

    return 0;
    
}