// 2.2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string markChecker(int mark)
{
    if (mark>=50) //Check the mark
    {
        return "Passed"; //Return pass/fail
    }
    else
    {
        return "Failed";
    }
}

int main()
{
    int number;

    cout << "Enter number:\n"; //Get number
    cin >> number;

    cout << markChecker(number);
}