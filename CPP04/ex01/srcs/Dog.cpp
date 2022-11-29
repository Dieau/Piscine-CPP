#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

Dog::Dog():Animal()
{
	this->type = "Dog";
	std::cout << "Beep. A nice " << this->type << " is running towards me!" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& Cp)
{
	this->type = Cp.type;
	std::cout << "Boop. Momma " << this->type << " just made a puppy!" << std::endl;
	this->_brain = new Brain();
}

Dog& Dog::operator =(const Dog& Cp)
{
	this->type = Cp.type;
	std::cout << "Beep. I just cloned a " << this->type << " from another one! Boop." << std::endl;
	*this->_brain = *Cp._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Beep... A poor little " << this->type << " just fetched its last bone...!" << std::endl;
	delete(this->_brain);
	return ;
}

void	Dog::MakeSound()
{
	std::cout << "Rrrrrr bark bark BARK! Awoooooo!" << std::endl;
}

Brain* Dog::GetBrain()
{
	return((this->_brain));
}