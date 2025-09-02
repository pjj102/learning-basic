#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int diceType;
    
    std::cout << "***************************\n";
    std::cout << "Time To Roll Some Dice!\n";
    std::cout << "***************************\n";
    std::cout << "Please select the dice: \n";
    std::cout << "1. Roll d4\n";
    std::cout << "2. Roll d6\n";
    std::cout << "3. Roll d8\n";
    std::cout << "4. Roll d10\n";
    std::cout << "5. Roll d12\n";
    std::cout << "6. Roll d20\n";
    std::cin >> diceType;


    switch(diceType) {
        case 1: std::cout << "You've got " << rand() % 4 + 1 << "! Bless the Dice Gods!\n"; 
                break;
        case 2: std::cout << "You've got " << rand() % 6 + 1 << "! Bless the Dice Gods!\n"; 
                break;
        case 3: std::cout << "You've got " << rand() % 8 + 1 << "! Bless the Dice Gods!\n"; 
                break;
        case 4: std::cout << "You've got " << rand() % 10 + 1 << "! Bless the Dice Gods!\n"; 
                break;
        case 5: std::cout << "You've got " << rand() % 12 + 1 << "! Bless the Dice Gods!\n"; 
                break;
        case 6: std::cout << "You've got " << rand() % 20 + 1 << "! Bless the Dice Gods!\n"; 
                break;
} if(diceType == 20) {
    std::cout << "That's a Critical Success! Amazing!\n";
} else if(diceType == 1){
    std::cout << "Unlucky, a Critical Fail! Better Luck Next Time!\n";
}
std::cout << "***************************\n";
}