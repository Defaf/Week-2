#include "Player.h"

Player::Player(string playerName, int playerHealth) : name(playerName), health(playerHealth) {}

void Player::takeDamage(int damage) {
    health = std::max(health - damage, 0);
}

void Player::displayStatus() const {
    cout << "Player: " << name << ", Health: " << health << endl;
}
