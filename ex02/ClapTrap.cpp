#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor\n";
    this->operator=(copy);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "ClapTrap Copy assignment operator\n";
    this->_Name = copy._Name;
    this->_hit_points = copy._hit_points;
    this->_energy_points = copy._energy_points;
    this->_attack_damage = copy._attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " mab9alich juhd a khouya.\n";
        return ;
    }
    if (_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " have no energy point to attack\n";
        return ;
    }
    std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _attack_damage << " points of damage!\n";
    _energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > 1000)
    {
        std::cout << "ClapTrap " << this->get_name() << " ignores ridiculous damage\n";
        return;
    }
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " bro i'm already dead what u want from me leave me die in peace.\n";
        return ;
    }
    std::cout << "ClapTrap " << _Name << " take damage and loss " << amount << " of hit points\n";
    _hit_points -= amount;
    if (_hit_points <= 0)
        std::cout << "ClapTrap " << _Name << " is dead\n";
    if (_hit_points < 0)
        _hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > 1000)
    {
        std::cout << "ClapTrap " << this->get_name() << " ignores ridiculous damage\n";
        return;
    }
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " he's already dead how can u repair a dead corp.\n";
        return ;
    }
    if (_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _Name << " don't have enough energy points to repair himself\n";
        return ;
    }
    _hit_points += amount;
    _energy_points -= 1;
    std::cout << "ClapTrap " << _Name << " have regained " << amount << " of hit_points\n";
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap construtor called\n";
    _Name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called\n";
    _Name = "";
    _hit_points = 0;
    _energy_points = 0;
    _attack_damage = 0;
}

// Setters
void ClapTrap::setname(std::string name)
{
    _Name = name;
}

void ClapTrap::set_hit_points(unsigned int amount)
{
    if (amount < 0)
    {
        std::cout << "no negative numbers allowed\n";
        return ;
    }
    _hit_points = amount;
}

void ClapTrap::set_energy_points(unsigned int amount)
{
    if (amount < 0)
    {
        std::cout << "no negative numbers allowed\n";
        return ;
    }
    _energy_points = amount;
}

void ClapTrap::set_attack_damage(unsigned int amount)
{
    if (amount < 0)
    {
        std::cout << "no negative numbers allowed\n";
        return ;
    }
    _attack_damage = amount;
}

// Getters
std::string ClapTrap::get_name(void) const
{
    return _Name;
}

int ClapTrap::get_hit_point(void) const
{
    return _hit_points;
}

int ClapTrap::get_energy_point(void) const
{
    return _energy_points;
}

int ClapTrap::get_attack_damage(void) const
{
    return _attack_damage;
}
