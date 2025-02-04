#include "Phone.h"
#include "Player.h"
#include "Enemy.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Create Phone objects and add them to a vector.
    vector<Phone> phones;
    phones.push_back(Phone("12345", 50));
    phones.push_back(Phone("67890", 80));

    // Display details of each phone using a simple for loop.
    for (size_t i = 0; i < phones.size(); i++) {
        phones[i].displayInfo();
    }

    // Create a Player object.
    Player player("Hero", 100);
    player.displayStatus();

    // Simulate player taking damage.
    player.takeDamage(20);
    player.displayStatus();

    // Create an Enemy object.
    Enemy enemy("Goblin", 50);
    enemy.displayStatus();

    // Simulate enemy taking damage.
    enemy.takeDamage(15);
    enemy.displayStatus();

    return 0;
}
