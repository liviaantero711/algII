#include<stdio.h>
int potencia(int x, int z)
{
  int r;
  r = 1;
  while (z > 0)
  {
    r = r * x;
    z = z - 1;
  }
  return r;
}
int main()
{
  int x;
  int z;
  int r;
  printf("Digite X: ");
  scanf("%d", &x);
  printf("Digite Z: ");
  scanf("%d", &z);
  r = potencia(x, z);
  printf("Resultado: %d", r);
  return 0;
}

