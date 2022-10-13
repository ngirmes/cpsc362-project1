#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <stdio.h>
#include "search.h"
#include "search.cpp"
using namespace std;


int run()
{
    // Variables and containers
    int user_choice = 0;
    string username, password, line;
    map<string, string> logins;

    // Open the login text file and check that it opened correctly
    ifstream user_login_info;
    user_login_info.open("user_login_info.txt", ios::in);
    if(!user_login_info.is_open())
    {
        return 0;
    }

    // Loop through the text file and store login information in logins (map type)
    while(user_login_info >> username >> password)
    {
        logins.insert(pair<string, string>(username, password));
    }

    // Initial menu upon running the app
    cout << "Welcome to Bookworm!\n1. Login\n2. Create an account.\n";
    cin >> user_choice ;

    // User choosing to login
    if(user_choice == 1)
    {
        // Prompt user to enter login info
        cout << "Login information is case sensitive!\nEnter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        // Loop through logins map to see if login information exists
        while (1)
        {
            for (const auto &myPair : logins)
            {
                if (username == myPair.first and password == myPair.second)
                {
                    cout << "You have successfuly logged in. Welcome back!" << endl;
                    // If login was found, jump to the main menu
                    goto main_menu;
                }
            }
          
            cout << "No login found or incorrect information. Enter 1 to retry, 2 to create an account, or 0 to exit." << endl;
            cin >> user_choice;
            if (user_choice == 0)
                return 0;
            else if (user_choice == 1)
            {
                cout << "Enter your username: ";
                cin >> username;
                cout << "Enter your password: ";
                cin >> password;
            }
            else if (user_choice == 2)
                break;
        }
    }

    // User choosing to create a new account
    if (user_choice == 2)
    {
        ofstream user_login_info;
        user_login_info.open("user_login_info.txt", ios::app);
        if(!user_login_info.is_open())
        {
            return 0;
        }
        
        while (1)
        {
            cout << "Enter a username: ";
            cin >> username;
            cout << "Enter a password: ";
            cin >> password;
            if (logins.find(username) != logins.end())
            {
                cout << "Username already taken! Please enter a new one.\n";
                continue;
                    
            }
            else
                break;

        }
        user_login_info << username + " " + password + "\n";
    }

    //Close the file
    user_login_info.close();

    //Jump to main menu/main menu
    main_menu:
    cout << "You are now in the main menu!";
    string name;
    ssearch book;

    cout<<"To show full list enter 'f' or enter a key word:" << endl;
    cout<< "Enter the name of the book: \n";

    cin.ignore();
    getline(cin,name);

    book.getbook(name);
    book.searchfile();

    // //Menu after logging in or creating an account
    // cout << "1. Acccount info\n2. Take a quiz!\n";
    // cin >> user_choice ;

    // if(user_choice == 1){

    // }
    return 0;
}