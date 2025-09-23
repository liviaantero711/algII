#include<stdio.h>
#include<string.h>
/*Faça uma função que receba um texto por parâmetro e escreva-o na tela
(print)*/
void p(char texto[])
{
  printf("%c", texto[20]);
}
int main()
{
  char t[50];
  printf("digite sua mensagem:");
  scanf("%c", &t[20]);
  p(t[20]);
  return(0);
}
