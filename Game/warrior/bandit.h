// Bandit Derived Class Of Warrior

#ifndef BANDIT_H
#define BANDIT_H

#include "../warrior.h"

class Bandit : public Warrior {
    public:
        Bandit(std::string bandit_name);  // Bandit Name Constructor Delegated To Base Main Constructor
};

#endif // BANDIT_H