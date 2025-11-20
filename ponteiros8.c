#include<stdio.h>
void preencher(int *v,int n,int valor)
{
  int *p
  for(p=v;p<v+n;p++)
  {
    *p=valor
  }
}
int main()
{
  int v[5],valor,r
  printf("Digite o valor para preencher: ")
  scanf("%d",&valor)
  preencher(v,5,valor)
  for(r=0;r<5;r++)
  {
    printf("%d ",v[r])
  }
}
