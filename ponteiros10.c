#include<stdio.h>
int main()
{
  int a,*b,**c,***d,r;
  b=&a;
  c=&b;
  d=&c;
  printf("Valor: ");
  scanf("%d",&a);
  r=(*b)*2;
  printf("Dobro: %d\n",r);
  r=(**c)*3;
  printf("Triplo: %d\n",r);
  r=(***d)*4;
  printf("Quadruplo: %d\n",r);
  return 0;
}
