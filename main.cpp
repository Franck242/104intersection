//
// main.cpp for emacs in /home/Johanne-Franck/104intersection
// 
// Made by NGBOKOLI Franck NFJ
// Login   <Johanne-Franck@epitech.net>
// 
// Started on  Sat Dec 24 18:58:15 2016 NGBOKOLI Franck NFJ
// Last update Sun Jan  8 18:28:51 2017 Johanne-Franck NGBOKOLI
//

#include "intersection.hpp"

using namespace std;

int	it_is_good(int ac, char **argv)
{
  int	i;

  i = 1;
  while (i <= ac - 1)
    {
      if (my_str_isnum(argv[i]) != 1)
	{
	  cerr<<"ERROR the argument in position "<<i<<" is not a number"<<endl;
	  exit(EXIT_ERROR);
	}
      i++;
    }
  return (0);
}

int	main(int ac, char **argv)
{
  t_my_point	point;
  t_my_point	direction;
  int		option;
  float		r;

  if (ac == 9)
    {
      it_is_good(ac, argv);
      point.x = atof(argv[2]);
      point.y = atof(argv[3]);
      point.z = atof(argv[4]);
      direction.x = atof(argv[5]);
      direction.y = atof(argv[6]);
      direction.z = atof(argv[7]);
      r = atoi(argv[8]);
      option = atof(argv[1]);
      if (option == 1)
	{
	  if (r < 0)
	    {
	      cerr<<"ERROR, radius is negative"<<endl;
	      exit(EXIT_ERROR);
	    }
         sphere_sol(r, point, direction);
	}
      if (option == 2)
	{
	    if (r < 0)
	    {
	      cerr<<"ERROR, radius is negative"<<endl;
	      exit(EXIT_ERROR);
	    }
	  cylindre_sol(r, point, direction);
	}
      if (option == 3)
	{
	  if (r >= 90 || r <= 0)
	    {
	      cerr<<"ERROR , cone angle value is invalid"<<endl;
	      exit(EXIT_ERROR);
	    }
	  else
	    {
	      cone_sol(r, point, direction);
	    }
	}
      if (option < 1 || option > 3)
	{
	  cerr<<"ERROR, option number is not available"<<endl;
	  return (EXIT_ERROR);
	}
    }
  if (ac < 9 || ac > 9)
    {
      cerr<<"ERROR, too few arguments"<<endl;
      return (EXIT_ERROR);
    }
  return (0);
}
