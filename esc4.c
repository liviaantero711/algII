#include<stdio.h>
#include<math.h>

void baskara(float a,float b,float c)
{
  float delta,r,r2;
  delta=b*b-(4*a*c);
  if(delta<0)
  {
    printf("Nao existe raiz real");
  }
  else
  {
    r=(-b+sqrt(delta))/(2*a);
    r2=(-b-sqrt(delta))/(2*a);
    printf("Raiz 1: %f Raiz 2: %f",r,r2);
  }
}

int main()
{
  float a,b,c;
  printf("Digite A: ");
  scanf("%f",&a);
  printf("Digite B: ");
  scanf("%f",&b);
  printf("Digite C: ");
  scanf("%f",&c);
  baskara(a,b,c);
  return 0;
}

