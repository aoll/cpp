// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 23:07:29 by aollivie          #+#    #+#             //
//   Updated: 2015/11/03 23:10:22 by aollivie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int	main(const int ac, char **av)
{
  int i;
  int j;

  if (ac == 1) {
	  std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; }
  j = 1;
  while (j < ac) {
    i = 0;
    while (av[j][i]) {
      if (av[j][i] >= 'a' && av[j][i] <= 'z') {
	std::cout << char(av[j][i] -32);
      }
      else
	std::cout << char(av[j][i]);
      i++;
    }
    j++;
  }
  std::cout << std::endl;
  return 0;
}
