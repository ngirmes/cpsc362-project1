#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int user_choice = 0;
    string username, password;

    cout << "Welcome to Bookworm!\n1. Login\n2. Create an account.\n";
    cin >> user_choice ;
    
    if(user_choice == 1){
        cout << "Enter your existing username: ";
        cin >> username;
        cout << "Enter your existing password: ";
        cin >> password;
    }
    else if (user_choice == 2){
        ofstream user_login_info;
        user_login_info.open("user_login_info.txt", ios::app);
        cout << "Enter a username: ";
        cin >> username;
        cout << "Enter a password: ";
        cin >> password;
        user_login_info << username + "\n";
        user_login_info << password + "\n";
        user_login_info.close();

    }    

    return 0;
}