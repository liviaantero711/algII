#include<stdio.h>

void converter(int r)
{
  int h,m,s
  h=r/3600
  r=r%3600
  m=r/60
  s=r%60
  printf("Horas: %d Minutos: %d Segundos: %d",h,m,s)
}

int main()
{
  int r
  printf("Digite o tempo em segundos: ")
  scanf("%d",&r)
  converter(r)
}
