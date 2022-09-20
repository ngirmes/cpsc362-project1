#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main(){

    //Variables
    int user_choice = 0;
    map<string, string> logins;
    string username, password, line;

    //Initial menu upon running the app
    cout << "Welcome to Bookworm!\n1. Login\n2. Create an account.\n";
    cin >> user_choice ;
    
    //User choosing to login
    if(user_choice == 1)
    {
        fstream user_login_info;
        user_login_info.open("user_login_info.txt", ios::in);
        if(!user_login_info.is_open())
        {
            return 0;
        }
        cout << "Enter your existing username: ";
        cin >> username;
        cout << "Enter your existing password: ";
        cin >> password;
        while(getline(user_login_info, line))
        if(line == username + password)
        {

        }
    }
    //User choosing to create a new account
    else if (user_choice == 2){
        fstream user_login_info;
        user_login_info.open("user_login_info.txt", ios::in | ios::out);
        if(!user_login_info.is_open())
        {
            return 0;
        }
        cout << "Enter a username: ";
        cin >> username;
        while(getline(user_login_info, line))
        {
            if (line == "username: " + username)
            {
                cout << "Username already exists! Please enter a different username.\n";
            }
            cin >> username;
        }
        cout << "Enter a password: ";
        cin >> password;
        user_login_info.seekp(ios_base::beg);
        user_login_info << "username: " + username + "\npassword: " + password + "\n";
        user_login_info.close();

    }    

    // //Menu after logging in or creating an account
    // cout << "1. Acccount info\n2. Take a quiz!\n";
    // cin >> user_choice ;

    // if(user_choice == 1){

    // }
    return 0;
}