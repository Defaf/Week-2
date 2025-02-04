// main.cpp
#include <iostream>
#include "Player.h"
#include "Enemy.h"

int main() {
    Player MainPlayer(10, 3, 2, "Hero");
    Enemy MainEnemy(5, 2, 1, "Goblin");
    int RoundNumber = 1;

    while (MainPlayer.GetIsAlive()) {
        std::string PlayerAction = MainPlayer.ChooseAction();
        std::string EnemyAction = MainEnemy.ChooseAction();

        std::cout << "\nPlayer " << PlayerAction << "s!" << std::endl;
        std::cout << "Enemy " << EnemyAction << "s!" << std::endl;
        std::cout << "---------------------------\n" << std::endl;

        if (PlayerAction == "Attack" && EnemyAction == "Attack") {
            std::cout << "It's a clash! The weapons ring as they hit each other!\n" << std::endl;
        }
        else if (PlayerAction == "Attack" && EnemyAction == "Parry") {
            std::cout << MainEnemy.GetName() << " parries the attack! No damage dealt.\n" << std::endl;
        }
        else if (PlayerAction == "Attack" && EnemyAction == "Defend") {
            std::cout << MainEnemy.GetName() << " is defending! The attack is less successful!\n" << std::endl;
            MainEnemy.UpdateHealth(-(MainPlayer.GetAtkPower() / 2));
        }
        else if (PlayerAction == "Defend" && EnemyAction == "Attack") {
            std::cout << "Our Hero is defending! " << MainEnemy.GetName() << "'s attack is less successful!\n" << std::endl;
            MainPlayer.UpdateHealth(-(MainEnemy.GetAtkPower() / 2));
        }
        else if (PlayerAction == "Parry" && EnemyAction == "Attack") {
            int ParrySuccess = rand() % 100;
            if (ParrySuccess < 50) {
                std::cout << "Our Hero masterfully parries! " << MainEnemy.GetName() << " takes double damage!\n" << std::endl;
                MainEnemy.UpdateHealth(-(MainPlayer.GetAtkPower() * 2));
            }
            else {
                std::cout << "Parry failed! " << MainEnemy.GetName() << " strikes our Hero!\n" << std::endl;
                MainPlayer.UpdateHealth(-MainEnemy.GetAtkPower());
            }
        }
        else {
            std::cout << "Nothing happens!\n" << std::endl;
        }

        std::cout << "\n|---- Hero Stats :  Atk: " << MainPlayer.GetAtkPower() << "  H: " << MainPlayer.GetHealth() << "  Armor: " << MainPlayer.Armor << "  |" << std::endl;
        std::cout << "|---- Enemy Stats:  Atk: " << MainEnemy.GetAtkPower() << "  H: " << MainEnemy.GetHealth() << "  Armor: " << MainEnemy.Armor << "  |\n" << std::endl;

        std::cout << "--- End of Round " << RoundNumber << " ---\n" << std::endl;
        RoundNumber++;

        if (!MainEnemy.GetIsAlive()) {
            std::cout << MainEnemy.GetName() << " has been defeated by our Hero! A new stronger enemy appears!\n" << std::endl;

            if (RoundNumber > 5) {
                std::cout << "Our Hero has defeated all his opponents and is now the champion of the arena!!!\n" << std::endl;
                break;
            }

            MainEnemy.IncreaseDifficulty(RoundNumber);
        }
    }

    if (!MainPlayer.GetIsAlive()) {
        std::cout << "Our Hero has perished! You must try again!\n" << std::endl;
    }

    std::cout << "Thanks for playing!\n" << std::endl;
    return 0;
}
