//Section 6
// Constants

/*
    Frank's Carter Cleaning Service
    Changes $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Promp the user for the number of rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost: $60
    Tax: $3.6

    ============================================
    Total stimate: $63.6
    This estimate is valid for 30 days

    Pseudocode:
       Prompt the user to enter the number of rooms
       Display number of rooms
       Display price per room

       Display cost: (number of rooms * price per room)
       Display tax: number of rooms * price per room * tax rate
       Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
       Display estimate expiration time

*/


#include <iostream>

using namespace std;

int main(){ 
    //variables
    int number_of_rooms {0};
    double price_room {30.0};
    double tax_rate {0.06};
    int expire {30};

    cout << "Hello, welcome to frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned: "; 
    cin >> number_of_rooms;  
    cout << endl;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_room << endl;
    cout << "Cost: $" << price_room * number_of_rooms << endl;
    cout << "Tax: $" << number_of_rooms * price_room * tax_rate << endl;
    cout << "\n============================================" << endl;
    cout << "Total estimate: $" << (price_room * number_of_rooms) + (price_room * number_of_rooms * tax_rate) << endl;
    cout << "This estimate is valid for " << expire << " days" << endl; 

    return 0;
}
