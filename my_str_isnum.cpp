//
// my_str_isnum.cpp for emacs in /home/Johanne-Franck/104intersection
// 
// Made by Johanne-Franck NGBOKOLI
// Login   <Johanne-Franck@epitech.net>
// 
// Started on  Wed Jan  4 16:19:41 2017 Johanne-Franck NGBOKOLI
// Last update Sun Jan  8 18:29:11 2017 Johanne-Franck NGBOKOLI
//


#include "intersection.hpp"

int	my_str_isnum(char *str)
{
  char	i;

  if (my_strlen(str) == 0)
    return (1);
  i = 0;
  if (str[0] == '-')
    i = 1;
  while (str[i] != '\0')
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
