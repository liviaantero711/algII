#include<stdio.h>

int idadeEmDias(int a,int m,int d)
{
  int r;
  r=a*365+m*30+d;
  return r;
}

int main()
{
  int a,m,d,r;
  printf("Digite anos: ");
  scanf("%d",&a);
  printf("Digite meses: ");
  scanf("%d",&m);
  printf("Digite dias: ");
  scanf("%d",&d);
  r=idadeEmDias(a,m,d);
  printf("Idade em dias: %d",r);
  return 0;
}

