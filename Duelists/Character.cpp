// Character.cpp
#include "Character.h"
#include <iostream>

Character::Character(int Health, int AtkPower, int Armor, std::string Name)
    : Health(Health), AtkPower(AtkPower), Armor(Armor), Name(Name) {
}

int Character::GetHealth() const { return Health; }
std::string Character::GetName() const { return Name; }
bool Character::GetIsAlive() const { return Health > 0; }
int Character::GetAtkPower() const { return AtkPower; }

void Character::UpdateHealth(int Amount) {
    Health += Amount;
    if (Health < 0) Health = 0;
    std::cout << Name << " has " << Health << " health remaining.\n" << std::endl;
}

void Character::IncreaseArmor() { Armor += 1; }

std::string Character::GetActionFromInput(int Input) {
    switch (Input) {
    case 0: return "Attack";
    case 1: return "Parry";
    case 2: return "Defend";
    default: return "Unknown Action";
    }
}