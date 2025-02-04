// Player.cpp
#include "Player.h"
#include <iostream>
#include <limits>

Player::Player(int Health, int AtkPower, int Armor, std::string Name)
    : Character(Health, AtkPower, Armor, Name) {
}

std::string Player::ChooseAction() {
    int Input;
    while (true) {
        std::cout << "\nChoose an action - (1: Attack, 2: Parry, 3: Defend)\n";
        std::cin >> Input;

        if (std::cin.fail() || Input < 1 || Input > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Input: You must enter 1, 2, or 3 (Attack, Parry, Defend)\n";
        }
        else {
            break;
        }
    }
    Input -= 1;
    return GetActionFromInput(Input);
}