#include <stdio.h>
int Ni (int x)
{
  printf(" Digite um valor inteiro: \n");
  scanf("%d", &x);
  if (x >= 0)
  {
    printf(" Seu número é positivo. \n");
  }
  else
  {
    printf(" Seu número é negativo. \n");
  }
  return x;
}

int main(void)
{
  int x;
  Ni (x);
  printf(" 0 \n");
}
