// Character.h
#pragma once
#include <string>

class Character {
public:
    Character(int Health, int AtkPower, int Armor, std::string Name);

    int GetHealth() const;
    std::string GetName() const;
    bool GetIsAlive() const;
    int GetAtkPower() const;
    void UpdateHealth(int Amount);
    void IncreaseArmor();

    virtual std::string ChooseAction() = 0;

protected:
    std::string Name;
    int Health;
    int AtkPower;
    int Armor;

    std::string GetActionFromInput(int Input);
};