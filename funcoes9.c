#include<stdio.h>
int pn (int r)
{
  printf("insira um valor inteiro: \n");
  scanf("%d", &r);
  if (r >= 0)
  {
    printf("positivo. \n");
  }
  else
  {
    printf("negativo. \n");
  }
  return r;
}

int main(void)
{
  int r;
  pn (r);
}
