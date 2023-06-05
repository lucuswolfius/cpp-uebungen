#include <iostream>
#include <iomanip>
#include <fstream>
#include "User.h"
using namespace std;

short display_menu()
{
    short choice;
    cout << "************ LOGIN-Menu ************" << endl;
    cout << "1. Create new user" << endl;
    cout << "2. Login" << endl;
    cout << "3. Show all users" << endl;
    cout << "4. Exit" << endl;
    cout << "************************************" << endl;
    cout << "Please choose an option: ";
    cin >> choice;
    return choice;
}

User* create_user()
{
    string username, password;
    User* newUser = new User;
    bool again = false;
    while (1)                       // Make sure nobody uses / in their userdata because thats the delimiter
    {
        again = false;
        cout << "Enter your username: ";
        cin >> username;
        for (int i = 0; i < username.length(); i++)
        {
            if (username[i] == '/')
            {
                cout << "Invalid username! Please dont use / for your username!" << endl;
                again = true;
                break;
            }
        }
        if (again)
        {
            continue;
        }
        cout << "Enter your password: ";
        cin >> password;
        for (int i = 0; i < password.length(); i++)
        {
            if (password[i] == '/')
            {
                cout << "Invalid password! Please dont use / for your password!" << endl;
                again = true;
                break;
            }
        }
        if (again)
        {
            continue;
        }
        break;
    }
    newUser->set_username(username);
    newUser->set_password(password);
    cout << "\nUser created. Switching back to main menu...\n" << endl;
    return newUser;
}

void login()
{
    string inputUsername, inputPassword, userdataString;
    bool found = false;
    cout << "Enter your username: ";
    cin >> inputUsername;
    cout << "Enter your password: ";
    cin >> inputPassword;
    userdataString = inputUsername + '/' + inputPassword;   // Combine username, /, password to one string to match the format in data.txt

    ifstream inputFile("data.txt");     // Open data.txt
    if (!inputFile)     // Check if file was opened correctly
    {
        cout << "\nError opening data file! Returning to main menu\n" << endl;
        return;
    }
    string line;
    while (getline(inputFile, line))
    {
        if (line.find(userdataString) != string::npos)
        {
            found = true;
            break;
        }
    }
    inputFile.close();
    if (found)
    {
        cout << "\nYou are now logged in!\n" << endl;
    }
    else
    {
        cout << "\nUsername or password was incorrect!\n" << endl;
    }
}

void list_all_users()
{
    char delimiter = '/';               // Set the delimiter char
    cout << "\nRegistered users:" << endl;
    ifstream inputFile("data.txt");     // Open file
    string line;
    size_t pos;
    while (getline(inputFile, line))    // Iterate through every line
    {
        pos = line.find(delimiter);     // Find the position of the delimiter
        line = line.substr(0, pos);     // Extract the username from the userdata
        cout << line << endl;
    }
    inputFile.close();                  // Close file
    cout << endl;
}

int main(int argc, char const *argv[])
{
    bool running = true;
    short choice;
    while (running)
    {
        choice = display_menu();
        User* newUser;
        switch (choice)
        {
        case 1:
            newUser = create_user();
            newUser->save_userdata();
            break;
        case 2:
            login();
            break;
        case 3:
            list_all_users();
            break;
        case 4:
            cout << "Exiting..." << endl;
            running = false;
            break;
        default:
            break;
        }
    }
    return 0;
}
