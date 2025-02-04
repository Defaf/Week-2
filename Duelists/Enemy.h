// Enemy.h
#pragma once
#include "Character.h"
#include <random>

class Enemy : public Character {
public:
    Enemy(int Health, int AtkPower, int Armor, std::string Name);

    std::string ChooseAction() override;
    void IncreaseDifficulty(int RoundNumber);

private:
    std::mt19937 Generator;
    std::uniform_int_distribution<> Distribution;
};