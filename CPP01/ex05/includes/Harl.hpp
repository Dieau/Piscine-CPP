#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
		typedef struct s_message
		{
			std::string level;
			void	(Harl::*fct)(void);
		} t_message;
		
	public:

		Harl();
		~Harl();
		void complain(std::string level);

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void some_other_complain(void);
		t_message	_messages[4];
};

#endif