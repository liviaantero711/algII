#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,delta,r,r2
  printf("Digite A: ")
  scanf("%f",&a)
  printf("Digite B: ")
  scanf("%f",&b)
  printf("Digite C: ")
  scanf("%f",&c)
  delta=b*b-(4*a*c)
  if(delta<0)
  {
    printf("Nao existe raiz real")
  }
  else
  {
    r=(-b+sqrt(delta))/(2*a)
    r2=(-b-sqrt(delta))/(2*a)
    printf("Raiz 1: %f",r)
    printf(" Raiz 2: %f",r2)
  }
}
