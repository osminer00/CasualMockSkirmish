#include "ghost.h"

// Attacks ================================
std::vector<Attack> ghost_attacks = {
    Attack("Spook!", 2, 2, PERFECT_CHANCE),
    Attack("Haunt", 3, 1, PERFECT_CHANCE)
};
// ========================================

// Constructor(s) ==========================================================================
// Ghost Name To Base Main
Ghost::Ghost(std::string ghost_name) : Warrior("Ghost", ghost_name, 1000, ghost_attacks) { }
// =========================================================================================