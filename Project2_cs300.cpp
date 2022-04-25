// Project2_cs300.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Course {
    string courseId;
    string courseName;
    string prerequisite1;
    string prerequisite2;
};

void Menu() {
    cout << "Welcome to the course planner. \n\n";
    cout << "\t1.Load Data Structure.\n";
    cout << "\t2. Print Course List.\n";
    cout << "\t3. Print Course.\n";
    cout << "\t9. Exit\n";
}
int main()
{
    Menu();
}
