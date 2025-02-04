// Enemy.cpp
#include "Enemy.h"

Enemy::Enemy(int Health, int AtkPower, int Armor, std::string Name)
    : Character(Health, AtkPower, Armor, Name), Generator(std::random_device{}()), Distribution(0, 2) {
}

std::string Enemy::ChooseAction() {
    int Action = Distribution(Generator);
    return GetActionFromInput(Action);
}

void Enemy::IncreaseDifficulty(int RoundNumber) {
    switch (RoundNumber) {
    case 1: return;
    case 2: Health += RoundNumber; Name = "Goblin Warrior"; break;
    case 3: Health += RoundNumber; AtkPower += RoundNumber; Name = "Gladiator"; break;
    case 4: Health += RoundNumber; AtkPower += RoundNumber; Name = "Berserker"; break;
    case 5: Health += RoundNumber; AtkPower += RoundNumber; Armor += RoundNumber / 2; Name = "Knight Champion"; break;
    }
}