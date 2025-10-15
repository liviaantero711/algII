#include<stdio.h>
/*Faça um procedimento que recebe por parâmetro o tempo de duração de
uma fábrica expressa em segundos e imprima esse tempo em horas, minutos
e segundos*/
void horas(int segundos)
{
  float h,m,s;
  int a,n;
  h = (segundos) / (3600);
  a = (segundos) % (3600);
  m = (a) / (60);
  n = (a) % (60);
  printf("%d horas, %2.f minutos, %2.f segundos", h, m, n);
}
int main()
{
  int s;
  printf("digite os segundos trabalhados:");
  scanf("%d",&s);
  horas(s);
  return(0);
}
