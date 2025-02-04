#include "Enemy.h"

Enemy::Enemy(string enemyType, int enemyHealth) : type(enemyType), health(enemyHealth) {}

void Enemy::takeDamage(int damage) {
    health = std::max(health - damage, 0);
}

void Enemy::displayStatus() const {
    cout << "Enemy: " << type << ", Health: " << health << endl;
}
