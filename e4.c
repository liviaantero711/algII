#include<stdio.h>
#include<math.h>
/*Faça um procedimento que recebe por parâmetro os valores necessário
para o cálculo da fórmula de báskara e imprima as suas raízes, caso seja
possível calcular*/
void bhaskara (float a, float b, float c)
{
  float delta;
  float x;
  float r;

  delta = pow(b,2) - 4 * (a * c);
  x = ((- b) + sqrt(delta)) / (2 * a);
  r = ((- b) - sqrt(delta)) / (2 * a);
  printf("valor:%2.f", x);
  printf("\nvalor:%2.f", r);
}
int main()
{
  float a, b, c;
  printf("digite o valor de a:");
  scanf("%f", &a);
  printf("digite o valor de b:");
  scanf("%f", &b);
  printf("digite o valor de c:");
  scanf("%f", &c);
  bhaskara(a,b,c);
  return(0);
}
