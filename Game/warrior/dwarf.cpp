#include "dwarf.h"

// Attacks ============================
std::vector<Attack> dwarf_attacks = {
    Attack("Trip", 50, 1, EVEN_CHANCE),
    Attack("Curse", 40, 1, GOOD_CHANCE)
};
// ====================================

// Constructor(s) =========================================================================
// Dwarf Name To Base Main
Dwarf::Dwarf(std::string dwarf_name) : Warrior("Dwarf", dwarf_name, 300, dwarf_attacks) { }
// ========================================================================================