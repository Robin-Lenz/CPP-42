#include "ClapTrap.hpp"

int main(){
	ClapTrap a("Gerd");
	ClapTrap b("Harald");

	a.attack(b.GetName());
	b.takeDamage(4);
	b.beRepaired(2);

	a.attack(b.GetName());
	b.takeDamage(10);
	b.beRepaired(2);
	return(0);
}