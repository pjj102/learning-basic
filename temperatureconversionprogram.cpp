#include <iostream>
#include <cstdio>

int main() {

    double temp;
    char unit;

    std::cout << "********** TEMPERATURE CONVERSION **********\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.9 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Polease enter in only C or F";
    }

    std::cout << "*********************************************";

    std::cin.ignore();
    std::cin.get();


    return 0;

}
