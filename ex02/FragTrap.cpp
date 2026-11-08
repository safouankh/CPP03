#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    if (this->get_hit_point() <= 0)
    {
        std::cout << "FragTrap " << this->get_name() << " mab9alouch johd!\n";
        return;
    }
    std::cout << "FragTrap " << this->get_name() << " giving you this 👋\n";
}

void FragTrap::attack(const std::string& target)
{
    if (this->get_hit_point() <= 0)
    {
        std::cout << "FragTrap " << this->get_name() << " mab9alich juhd a khouya.\n";
        return ;
    }
    if (this->get_energy_point() <= 0)
    {
        std::cout << "FragTrap " << this->get_name() << " have no energy point to attack\n";
        return ;
    }
    std::cout << "FragTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack_damage() << " points of damage!\n";
    this->set_energy_points(this->get_energy_point() - 1);
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (amount > 1000)
    {
        std::cout << "FragTrap " << this->get_name() << " ignores ridiculous damage\n";
        return;
    }
    if (this->get_hit_point() <= 0)
    {
        std::cout << "FragTrap " << this->get_name() << " bro i'm already dead what u want from me leave me die in peace.\n";
        return ;
    }
    std::cout << "FragTrap " << this->get_name() << " take damage and loss " << amount << " of hit points\n";
    this->set_hit_points(this->get_hit_point() - amount);
    if (this->get_hit_point() <= 0)
        std::cout << "FragTrap " << this->get_name() << " is dead\n";
    if (this->get_hit_point() < 0)
        this->set_hit_points(0);
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (amount > 1000)
    {
        std::cout << "FragTrap " << this->get_name() << " ignores ridiculous damage\n";
        return;
    }
    if (this->get_hit_point() <= 0)
    {
        std::cout << "FragTrap " << this->get_name() << " he's already dead how can u repair a dead corp.\n";
        return ;
    }
    if (this->get_energy_point() <= 0)
    {
        std::cout << "FragTrap " << this->get_name() << " don't have enough energy points to repair himself\n";
        return ;
    }
    this->set_hit_points(this->get_hit_point() + amount);
    this->set_energy_points(this->get_energy_point() - 1);
    std::cout << "FragTrap " << this->get_name() << " have regained " << amount << " of hit_points\n";
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap copy constructor\n";
    this->operator=(copy);
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap Copy assignment operator\n";
    this->setname(copy.get_name());
    this->set_attack_damage(copy.get_attack_damage());
    this->set_energy_points(copy.get_energy_point());
    this->set_hit_points(copy.get_hit_point());
    return (*this);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap construtor called\n";
    this->setname(name);
    this->set_hit_points(100);
    this->set_energy_points(100);
    this->set_attack_damage(30);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
    this->setname("");
    this->set_hit_points(0);
    this->set_energy_points(0);
    this->set_attack_damage(0);
}
