#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
    private:
    string firstName = "";
    string lastName = "";
    short age = 0;

    public:
    Person(string newFirstName, string newLastName, short newAge);  //Custom constructor
    Person();   //Default constructor
    void print_details();
};
#endif