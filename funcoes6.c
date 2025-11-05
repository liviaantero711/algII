#include <stdio.h>

int i (int a, int m, int d)
{

  printf("Insira sua idade em anos: \n");
  scanf("%d", &a);
  printf("Insira sua idade em meses:\n");
  scanf("%d", &m);
  printf("Insira sua idade em dias: \n");
  scanf("%d", &d);
  int total = (a * 365) + (m * 30) + d;
  printf(" Sua idade total em dias é igual a: %d dias\n", total);
  return total;
}
int main ()
{
  int anos, meses, dias;
  i(anos, meses, dias);
  return(0);
}
