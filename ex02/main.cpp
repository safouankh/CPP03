#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap test("test");
    test.attack("test1");
    std::cout << test.get_hit_point()<<"\n";
    test.beRepaired(45);
    std::cout << test.get_hit_point()<<"\n";
    test.takeDamage(500);
    std::cout << test.get_hit_point()<<"\n";
    test.highFivesGuys();

    return 0;
}