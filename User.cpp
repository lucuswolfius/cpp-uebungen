#include "User.h"
#include <fstream>
#include <iostream>
using namespace std;

User::User()
{
    username = "";
    password = "";
}
User::User(string newUsername, string newPassword)
{
    username = newUsername;
    password = newPassword;
}
void User::set_username(string newUsername)
{
    username = newUsername;
}
void User::set_password(string newPassword)
{
    password = newPassword;
}
void User::save_userdata()
{
    ofstream outputFile("data.txt", std::ios::app);        //Open file
    if (outputFile.is_open())
    {
        outputFile << '\n' << this->username;       //Write data into file
        outputFile << '/';
        outputFile << this->password;
        outputFile.close();                 //Close file
    }
    else
    {
        cout << "Couldn't save data, try again!" << endl;
    }
}