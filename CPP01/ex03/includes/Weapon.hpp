#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

	public:

		Weapon(std::string name);
		~Weapon();
		std::string&	getType();
		void			setType(std::string name);

	private:
    
		std::string _type;

};

#endif