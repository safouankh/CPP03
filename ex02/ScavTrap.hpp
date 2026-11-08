#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name = "Unknown_ScavTrap");
        ScavTrap& operator=(const ScavTrap& copy);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();
        void guardGate(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif