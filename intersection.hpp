/*
** intersection.h for emacs in /home/Johanne-Franck/104intersection
** 
** Made by NGBOKOLI Franck NFJ
** Login   <Johanne-Franck@epitech.net>
** 
** Started on  Thu Dec 22 17:32:19 2016 NGBOKOLI Franck NFJ
// Last update Sun Jan  8 18:28:36 2017 Johanne-Franck NGBOKOLI
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <unistd.h>

#ifndef INTERSECTION_HPP_
#define INTERSECTION_HPP_
#define EXIT_ERROR 84
#define PI 3.14

typedef struct	s_my_point
{
  int	x;
  int	y;
  int	z;
}t_my_point;

int	my_str_isnum(char *str);
int	my_strlen(char *str);
int	my_str_isnum(char *str);
void	sphere_sol(int radius, t_my_point point, t_my_point vector);
void	cylindre_sol(int radius, t_my_point point, t_my_point vector);
void	cone_sol(int radius, t_my_point point, t_my_point vector);
void	argument_condition(int ac , char **argv);

#endif /* INTERSECTION_HPP_ */
