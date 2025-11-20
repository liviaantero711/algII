#include<stdio.h>

struct Data
{
  int d,m,a;
};

int totalDias(struct Data x)
{
  int r;
  r=x.a*365 + x.m*30 + x.d;
  return r;
}

int main()
{
  struct Data d1,d2;
  int t1,t2,dif;
  printf("Digite dia da primeira data: ");
  scanf("%d",&d1.d);
  printf("Digite mes da primeira data: ");
  scanf("%d",&d1.m);
  printf("Digite ano da primeira data: ");
  scanf("%d",&d1.a);
  printf("Digite dia da segunda data: ");
  scanf("%d",&d2.d);
  printf("Digite mes da segunda data: ");
  scanf("%d",&d2.m);
  printf("Digite ano da segunda data: ");
  scanf("%d",&d2.a);
  t1=totalDias(d1);
  t2=totalDias(d2);
  dif=t1-t2;
  if(dif<0)
  {
    dif=dif*-1;
  }
  printf("Dias decorridos: %d",dif);
  return 0;
}
