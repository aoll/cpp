#include "Contact.class.hpp"
#include <iostream>



Contact::Contact ( void )
{
  
}


void	Contact::ft_add(void)
{
  Contact::_nbContact++;
  std::cout << "Put a first name: ";
  std::getline (std::cin,this->_first_name);
   
  std::cout << "Put a last name: ";
  std::getline (std::cin,this->_last_name);

  std::cout << "Put a nickname: ";
  std::getline (std::cin,this->_nickname);

  std::cout << "Put a login: ";
  std::getline (std::cin,this->_login);

  std::cout << "Put a postal adress: ";
  std::getline (std::cin,this->_postal_adress);

  std::cout << "Put a email adress: ";
  std::getline (std::cin,this->_email_adress);

  std::cout << "Put a phone number: ";
  std::getline (std::cin,this->_phone_number);

  std::cout << "Put a birthday date: ";
  std::getline (std::cin,this->_birthday_date);

  std::cout << "Put a favorite meal: ";
  std::getline (std::cin,this->_favorite_meal);

  std::cout << "Put a underwear color: ";
  std::getline (std::cin,this->_underwear_color);

  std::cout << "Put your darkest secret: ";
  std::getline (std::cin,this->_darkest_secret);
}

void	Contact::ft_print(std::string str)
{
  int i;

  i = 0;
  if (str.length() < 11){
    std::cout << str;
    std::cout << std::setw(11 - str.length()) << "|";
  }
  else
    {
      while (i < 9) {
	std::cout << str[i++];
      }
      std::cout << ".|";
    }
    
}

void	Contact::ft_search(int i)
{
  std::cout << i << std::setw(9) << "|";
  ft_print(this->_first_name);
  ft_print(this->_last_name);
  ft_print(this->_nickname);
  ft_print(this->_login);
  std::cout << std::endl;
}

void	Contact::ft_index(void)
{
  std::cout << "first name: " << this->_first_name << std::endl;
  std::cout << "last name: " << this->_last_name << std::endl;
  std::cout << "nickname: " << this->_nickname << std::endl;
  std::cout << "login: " << this->_login << std::endl;
  std::cout << "postal adress: " << this->_postal_adress << std::endl;
  std::cout << "email adress: " << this->_email_adress << std::endl;
  std::cout << "phone number: " << this->_phone_number << std::endl;
  std::cout << "birthday date: " << this->_birthday_date << std::endl;
  std::cout << "favorite meal: " << this->_favorite_meal << std::endl;
  std::cout << "underwear color: " << this->_underwear_color << std::endl;
  std::cout << "darkest secret: " << this->_darkest_secret << std::endl;
}

int	Contact::getNbContact(void)
{
  return Contact::_nbContact;
}

int	Contact::_nbContact = 0;
