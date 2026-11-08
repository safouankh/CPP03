#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
    if (this->get_hit_point() <= 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " mab9alich juhd a khouya.\n";
        return ;
    }
    if (this->get_energy_point() <= 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " have no energy point to attack\n";
        return ;
    }
    std::cout << "ScavTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack_damage() << " points of damage!\n";
    this->set_energy_points(this->get_energy_point() - 1);
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount > 1000)
    {
        std::cout << "ScavTrap " << this->get_name() << " ignores ridiculous damage\n";
        return;
    }
    if (this->get_hit_point() <= 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " bro i'm already dead what u want from me leave me die in peace.\n";
        return ;
    }
    std::cout << "ScavTrap " << this->get_name() << " take damage and loss " << amount << " of hit points\n";
    this->set_hit_points(this->get_hit_point() - amount);
    if (this->get_hit_point() <= 0)
        std::cout << "ScavTrap " << this->get_name() << " is dead\n";
    if (this->get_hit_point() < 0)
        this->set_hit_points(0);
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (amount > 1000)
    {
        std::cout << "ScavTrap " << this->get_name() << " ignores ridiculous damage\n";
        return;
    }
    if (this->get_hit_point() <= 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " he's already dead how can u repair a dead corp.\n";
        return ;
    }
    if (this->get_energy_point() <= 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " don't have enough energy points to repair himself\n";
        return ;
    }
    this->set_hit_points(this->get_hit_point() + amount);
    this->set_energy_points(this->get_energy_point() - 1);
    std::cout << "ScavTrap " << this->get_name() << " have regained " << amount << " of hit_points\n";
}

void ScavTrap::guardGate(void)
{
    if (this->get_hit_point() <= 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " is dead and cannot guard gates!\n";
        return;
    }
    std::cout << "ScavTrap " << this->get_name() << " is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "ScavTrap copy constructor\n";
    this->operator=(copy);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap Copy assignment operator\n";
    this->setname(copy.get_name());
    this->set_attack_damage(copy.get_attack_damage());
    this->set_energy_points(copy.get_energy_point());
    this->set_hit_points(copy.get_hit_point());
    return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap construtor called\n";
    this->setname(name);
    this->set_hit_points(100);
    this->set_energy_points(50);
    this->set_attack_damage(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
    this->setname("");
    this->set_hit_points(0);
    this->set_energy_points(0);
    this->set_attack_damage(0);
}
