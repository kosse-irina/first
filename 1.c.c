#include <stdio.h>
#include <math.h>
double Exponenta(double x)
{
return 1/(1+exp(-x));
}
int main()
{
  double x;

  printf("Input x=");
  scanf("%lf",&x);

  printf("Result: %lf\n",Exponenta(x));
}
