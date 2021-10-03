#include<stdio.h>
#define PI 3.14

int main()
{
  float radius, area, circumference;

  printf("\n Enter the radius of a circle\n");
  scanf("%f",&radius);

  area = PI*radius*radius; 
  circumference = 2* PI*radius;

  printf("\n Area Of a Circle = %.2f\n", area);
  printf("\n Circumference Of a Circle = %.2f\n", circumference);

  return 0;
}
