#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string     _Name;
        int             _hit_points;
        int             _energy_points;
        int             _attack_damage;

    public:
        void            setname(std::string name);
        void            set_hit_points(unsigned int amount);
        void            set_energy_points(unsigned int amount);
        void            set_attack_damage(unsigned int amount);
        std::string     get_name(void) const;
        int             get_hit_point(void) const;
        int             get_energy_point(void) const;
        int             get_attack_damage(void) const;
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        ClapTrap(std::string name = "Unknown_ClapTrap");
        ClapTrap& operator=(const ClapTrap& copy);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();
};

#endif