// Player.h
#pragma once
#include "Character.h"

class Player : public Character {
public:
    Player(int Health, int AtkPower, int Armor, std::string Name);
    std::string ChooseAction() override;
};