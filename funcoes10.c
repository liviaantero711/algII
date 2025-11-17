#include<stdio.h>
/*Faça uma função que recebe um valor inteiro e verifica se o valor é par
ou ímpar. A função deve retornar um valor inteiro*/
int in(int r)
{
  printf("insira um valor inteiro:");
  scanf("%d", &r);
  if( r % 2 == 0)
  {
  printf("par\n");
  }
  else
  {
  printf("impar");
  }
  return r;
}
int main()
{
  int r;
  in(r);
 return(0);
}
