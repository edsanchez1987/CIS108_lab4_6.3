// LAB4_6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int burgers;
float length;


int main()
{
    cout << "Enter number of burgers: ";
    cin >> burgers;
    length = 5.5 * burgers / 3;
    cout << "A grill of 18 inches deep 18 inches wide and " << length << " inches long is needed"
        << " for " << burgers << " burgers." << endl;
}


