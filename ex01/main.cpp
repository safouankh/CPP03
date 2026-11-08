#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap test("test");
    test.attack("test1");
    std::cout << test.get_hit_point()<<"\n";
    test.beRepaired(45);
    std::cout << test.get_hit_point()<<"\n";
    test.takeDamage(500);
    std::cout << test.get_hit_point()<<"\n";

    return 0;
}