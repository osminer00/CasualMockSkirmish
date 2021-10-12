#include "attack.h"

// Constructor(s) =========================================================================================
// Default
Attack::Attack()
    : name("")
    , damage_amount(0)
    , max_targets(0)
    , chance(0) { }

// Main
Attack::Attack(std::string name, unsigned int damage_amount, unsigned int max_targets, unsigned int chance)
    : name(name)
    , damage_amount(damage_amount)
    , max_targets(max_targets)
    , chance(chance) { }
// ========================================================================================================

// Accessor(s) =================================
// Name
std::string Attack::get_name() const {
    return name;
}

// Damage Amount
unsigned int Attack::get_damage_amount() const {
    return damage_amount;
}
// =============================================

// Execute Attack ============================================================================
// Attack 1 Opponent
bool Attack::execute(Warrior *opponent) {
    unsigned int execution_accuracy = rand() % 101;
    bool is_attack_successful = execution_accuracy <= chance;

    if (is_attack_successful) {
        opponent->receive_damage(damage_amount);
    }

    return is_attack_successful;
}

/*
// Attack 2 Opponents (Not Implemented Yet)
bool Attack::execute(Warrior *first_opponent, Warrior *second_opponent) {
    unsigned int first_execution_accuracy  = rand() % 101;
    bool is_first_attack_successful  = first_execution_accuracy <= chance;

    if (is_first_attack_successful) {
        first_opponent->receive_damage(damage_amount);
    }

    unsigned int second_execution_accuracy = rand() % 101;
    bool is_second_attack_successful = second_execution_accuracy <= chance && max_targets > 1;

    if (is_second_attack_successful) {
        second_opponent->receive_damage(damage_amount);
    }

    return is_first_attack_successful || is_second_attack_successful;
}
*/
// ===========================================================================================
