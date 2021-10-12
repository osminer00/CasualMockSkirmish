// Attack Class

#pragma once
#ifndef ATTACK_H
#define ATTACK_H

#include "warrior.h"
class Warrior;  // Forward Warrior Declaration

#include <string>

class Attack {
    public:
        Attack();                                                                                             // Default Constructor
        Attack(std::string name, unsigned int damage_amount, unsigned int max_targets, unsigned int chance);  // Main Constructor
        std::string get_name() const;                                                                         // Name Accessor
        unsigned int get_damage_amount() const;                                                               // Damage Amount Accessor
        bool execute(Warrior *opponent);                                                                      // Attack 1 Opponent
        //bool execute(Warrior *first_opponent, Warrior *second_opponent);                                      // Attack 2 Opponents (Not Implemented Yet)
    private:
        std::string name;                                                                                     // Name
        unsigned int damage_amount;                                                                           // Damage Amount
        unsigned int max_targets;                                                                             // Maximum Targets Affected
        unsigned int chance;                                                                                  // Successful Hit Chance
};

#endif // ATTACK_H
