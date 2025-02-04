#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>
#include <algorithm>  // For std::max
using namespace std;

class Enemy {
private:
    string type;
    int health;

public:
    Enemy(string enemyType, int enemyHealth);
    void takeDamage(int damage);
    void displayStatus() const;
};

#endif
