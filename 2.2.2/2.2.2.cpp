// 2.2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string markChecker(int mark)
{
    if (mark>=50)
    {
        return "Passed";
    }
    else
    {
        return "Failed";
    }
}

int main()
{
    int number;

    cout << "Enter number:\n";
    cin >> number;

    cout << markChecker(number);
}