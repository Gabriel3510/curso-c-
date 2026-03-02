//Section 6 
//Challenge

/*
    Frank's Carpet Cleaning Service
    Changes:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number os small and lange rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days

*/

#include <iostream>

using namespace std;

int main(){
     
    
    //variables
    int days {30};
    double tax_rate {0.06};
    int small_room {25};
    int large_room {35};
    int n_small {0};
    int n_large {0};

    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned: ";
    cin >> n_small; 
    cout << endl;
    cout << "\nHow many large rooms would you like cleaned: ";
    cin >> n_large;
    cout << endl;

    cout << "Estimate for carpet clening service" << endl;
    cout << "Number of large rooms: " << n_large << endl;
    cout << "Price per large room: $" << large_room << endl;
    cout << "Number of small rooms: " << n_small << endl;
    cout << "Price per small room: $" << small_room << endl;
    cout << "Cost: $" << (n_large * large_room) + (n_small * small_room) << endl;
    cout << "Tax: $" << ((n_large * large_room) + (n_small * small_room)) * tax_rate << endl;
    cout << "============================================" << endl;
    cout << "Total estimate: $" << ((n_large * large_room) + (n_small * small_room)) + ((n_large * large_room) + (n_small * small_room)) * tax_rate << endl;
    cout << "This estimate is valid for " << days << " days" << endl;


}