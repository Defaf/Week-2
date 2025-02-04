#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <algorithm>  // For std::max
using namespace std;

class Player {
private:
    string name;
    int health;

public:
    Player(string playerName, int playerHealth);
    void takeDamage(int damage);
    void displayStatus() const;
};

#endif
