#include <iostream>
#include <string>
#include <cstdio>

int main(){

    std::string userName;
    std::string password;
    std::string login;
    std::string pass;

    std::cout << "****************************************************************" << std::endl;

    std::cout << "Please enter your username to register: \n";
    std::getline(std::cin, userName);

    std::cout << "Please enter your password to register: \n";
    std::getline(std::cin, password);

    while(password.length() < 8){
        std::cout << "Password must be at least 8 characters long. Please enter a new password: ";
        std::getline(std::cin, password);
    }
    while(userName.empty()){
        std::cout << "Username cannot be empty. Please enter a valid username: ";
        std::getline(std::cin, userName);
    }

    std::cout << "Registration successful!" << std::endl;

    std::cout << "Please Log in to your account" << std::endl;
    std::cout << "Enter your username: ";
    std::getline(std::cin, login);
    std::cout << "Enter your password: ";
    std::getline(std::cin, pass);

    if(login == userName && pass == password){
        std::cout << "Login successful! Welcome, " << userName << std::endl;
    
    }else {
        std::cout << "Incorrect username or password. Please try again." << std::endl;
    }
    std::cout << "****************************************************************" << std::endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}