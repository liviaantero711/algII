#include<stdio.h>
void imprimir(int *v,int n)
{
  int *p;
  for(p=v;p<v+n;p++)
  {
    printf("%d ",*p);
  }
}
int main()
{
  int v[5],r;
  for(r=0;r<5;r++)
  {
    printf("Valor: ");
    scanf("%d",&v[r]);
  }
  imprimir(v,5);
  return 0;
}
