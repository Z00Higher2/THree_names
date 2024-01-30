// Write a program that prints three items, such as the names of your three best friends
// or favorite movies, on three separate lines.
// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi

#include <iostream>
using namespace std;

int main(){
    string name_1; // Declared the First Name variable
    cout << "Enter the First Name: "<< endl;
    cin >> name_1; // User input for the first name

    string name_2; // Declared the Second Name variable
    cout << "Enter the Second Name: "<< endl;
    cin >> name_2; // User input for the second name

    string name_3; // Declared the Third Name variable
    cout << "Enter the Third Name: "<< endl;
    cin >> name_3; // User input for the third name

    cout << name_1 << endl; // Print the First Name
    cout << name_2 << endl; // Print the Second Name
    cout << name_3 << endl; // Print the Third Name

    return 0;
}