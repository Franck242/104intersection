//
// 104intersection.cpp for emacs in /home/Johanne-Franck/104intersection
// 
// Made by NGBOKOLI Franck NFJ
// Login   <Johanne-Franck@epitech.net>
// 
// Started on  Sat Dec 24 18:09:50 2016 NGBOKOLI Franck NFJ
// Last update Sun Jan  8 18:29:59 2017 Johanne-Franck NGBOKOLI
//

#include "intersection.hpp"

using namespace std;

float	delta_calcul(float a, float b, float c)
{
  float	delta;

  delta = b * b - 4 * a * c;
  if (delta < 0)
    {
      cout<<"No intersection point."<<endl;
    }
  if (delta > 0)
    {
      cout<<"2 intersection points :"<<endl;
    }
  return (delta);
}

void	sphere_sol(int radius, t_my_point point, t_my_point vector)
{
  float	x1;
  float	x2;
  float	delta;
  float	a;
  float	b;
  float	c;

   a = vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
   b = (2 * point.x * vector.x) + (2 * point.y * vector.y) + (2 * point.z * vector.z);
   c = point.x * point.x + point.y * point.y + point.z * point.z - radius * radius;
   cout<<"sphere of radius "<<radius<<endl;
   cout<<"straight line going through the ("<<point.x<<","<<point.y<<","<<point.z<<")"<<" point and of direction vector ("<<vector.x<<","<<vector.y<<","<<vector.z<<")"<<endl;
   delta = delta_calcul(a, b, c);
   if (delta == 0)
     {
       cout<<"1 intersection point :"<<endl;
       x1 = - (b / (2 * a));
       printf("(%.3f, ", point.x + x1 * vector.x);
       printf("%.3f, ", point.y + x1 * vector.y);
       printf("%.3f)\n" , point.z + x1 * vector.z);
     }
   if (delta > 0)
     {
       x1 = ((-b) - sqrt(delta)) / (2 * a);
       x2 = ((-b) + sqrt(delta)) / (2 * a);
       printf("(%.3f, ", point.x + x2 * vector.x);
       printf("%.3f, ", point.y + x2 * vector.y);
       printf("%.3f)\n" , point.z + x2 * vector.z);
       printf("(%.3f, ", point.x + x1 * vector.x);
       printf("%.3f, ", point.y + x1 * vector.y);
       printf("%.3f)\n" , point.z + x1 * vector.z);
     }
}

void	cylindre_sol(int radius, t_my_point point, t_my_point vector)
{
  float	x1;
  float	x2;
  float	delta;
  float	a;
  float	b;
  float	c;

   a = vector.x * vector.x + vector.y * vector.y;
   b = (2 * point.x * vector.x) + (2 * point.y * vector.y);
   c = point.x * point.x + point.y * point.y - radius * radius;
   cout<<"cylinder of radius "<<radius<<endl;
   cout<<"straight line going through the ("<<point.x<<","<<point.y<<","<<point.z<<")"<<" point and of direction vector ("<<vector.x<<","<<vector.y<<","<<vector.z<<")"<<endl;
   delta = delta_calcul(a, b, c);
   if (delta == 0)
     {
       if (!(point.x + x1 * vector.x) || !(point.y + x1 * vector.y) || !(point.z + x1 * vector.z))
	 {
	   cout<<"There is an infinite number of intersection points."<<endl;
	 }
       else
	 {
	   cout<<"1 intersection point :"<<endl;
	   x1 = - (b / (2 * a));
	   printf("(%.3f, ", point.x + x1 * vector.x);
	   printf("%.3f, ", point.y + x1 * vector.y);
	   printf("%.3f)\n" , point.z + x1 * vector.z);
	 }
     }
   if (delta > 0)
     {
       x1 = ((-b) - sqrt(delta)) / (2 * a);
       x2 = ((-b) + sqrt(delta)) / (2 * a);
       printf("(%.3f, ", point.x + x2 * vector.x);
       printf("%.3f, ", point.y + x2 * vector.y);
       printf("%.3f)\n" , point.z + x2 * vector.z);
       printf("(%.3f, ", point.x + x1 * vector.x);
       printf("%.3f, ", point.y + x1 * vector.y);
       printf("%.3f)\n" , point.z + x1 * vector.z);
     }
}

void	cone_sol(int angle, t_my_point point, t_my_point vector)
{
  float	x1;
  float	x2;
  float	delta;
  float	a;
  float	b;
  float	c;
  float	r;

  r = (M_PI / 2) - (angle * M_PI / 180);
  cout<<"cone of "<<angle<<" degree angle"<<endl;
  cout<<"straight line going through the ("<<point.x<<","<<point.y<<","<<point.z<<")"<<" point and of direction vector ("<<vector.x<<","<<vector.y<<","<<vector.z<<")"<<endl;
  a = (tan(r) * tan(r)) * ((vector.x * vector.x) + (vector.y * vector.y)) - (vector.z * vector.z);
  b = (tan(r) * tan(r)) * ((2 * point.x * vector.x) + (2 * point.y * vector.y)) - (2 * point.z * vector.z);
  c = (tan(r) * tan(r)) * ((point.x * point.x) + (point.y * point.y)) - (point.z * point.z) ;
  delta = delta_calcul(a, b, c);
  if (delta == 0)
    {
      if (!(point.x + x1 * vector.x) || !(point.y + x1 * vector.y) || !(point.z + x1 * vector.z))
	 {
	   cout<<"There is an infinite number of intersection points."<<endl;
	 }
      else
	{
	  cout<<"1 intersection point :"<<endl;
	  x1 = - (b / (2 * a));
	  printf("(%.3f, ", point.x + x1 * vector.x);
	  printf("%.3f, ", point.y + x1 * vector.y);
	  printf("%.3f)\n" , point.z + x1 * vector.z);
	}
    }
  if (delta > 0)
    {
      x1 = ((-b) - sqrt(delta)) / (2 * a);
      x2 = ((-b) + sqrt(delta)) / (2 * a);
      printf("(%.3f, ", point.x + x2 * vector.x);
      printf("%.3f, ", point.y + x2 * vector.y);
      printf("%.3f)\n" , point.z + x2 * vector.z);
      printf("(%.3f, ", point.x + x1 * vector.x);
      printf("%.3f, ", point.y + x1 * vector.y);
      printf("%.3f)\n" , point.z + x1 * vector.z);
    }
}
