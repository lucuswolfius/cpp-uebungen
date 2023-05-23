#include "person.h"
#include <iostream>
#include <iomanip>

using namespace std;

Person::Person(string newFirstName, string newLastName, short newAge)   //Constructor
{
    firstName = newFirstName;
    lastName = newLastName;
    age = newAge;
}
Person::Person()
{
    firstName = "";
    lastName = "";
    age = 0;
}
void Person::print_details()
{
    cout << "First name: " << firstName << "\nLast name: " << lastName << "\nAge: " << age << endl;
}