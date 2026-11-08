#include "ClapTrap.hpp"

int main()
{
    ClapTrap test("test");
    test.attack("test1");
    std::cout << test.get_hit_point()<<"\n";
    test.beRepaired(45);
    std::cout << test.get_hit_point()<<"\n";
    test.takeDamage(999);
    std::cout << test.get_hit_point()<<"\n";

    return 0;
}