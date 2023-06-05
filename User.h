#pragma once
#include <string>
using namespace std;

class User
{
    private:
    string username;
    string password;

    public:
    User();
    User(string newUsername, string newPassword);
    void set_username(string newUsername);
    void set_password(string newPassword);
    void save_userdata();
    string read_username();
    string read_password();
    bool login();
};