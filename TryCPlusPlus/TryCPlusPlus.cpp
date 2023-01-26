// TryCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{    
    cout << "Circle Calculator" << endl << endl;
    double radius;
    cout << "Enter Radius : ";
    cin >> radius;

    double pi = 3.14159;
    double diameter = 2 * radius;
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0);
    circumference = round(circumference * 10) / 10;
    area = round(area * 10) / 10;

    cout << "Diameter: " << diameter << endl
        << "Circumference: " << circumference << endl
        << "Area: " << area << endl << endl
        << "Bye!" << endl << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
