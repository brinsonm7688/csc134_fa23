#include <iostream>
using namespace std;

/*
CSC 134
M1LAB - Apple Orchard
brinsonm
8/28
Simple interactive store.
*/


int main()
{
    string name = "Brinson";
    cout << "Welcome to the " << name << " orchard." << endl;

    // declare our variables
    int apples = 100;
    double price_each = 0.25;

    // print number of apples, price each
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "Cost is $" << price_each << " each." << endl;

    double total_price = apples * price_each;
    // then print the total price
    cout << "The price for all of them is $" << total_price << endl;
    //TODO: ask user how many to buy

    //TODO: Make prices look "Correct" (e.g. $25.00)


    return 0;
}
