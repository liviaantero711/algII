#include<stdio.h>

int main()
{
  int a,b;
  int *pa,*pb;
  printf("Digite A: ");
  scanf("%d",&a);
  printf("Digite B: ");
  scanf("%d",&b);
  pa=&a;
  pb=&b;
  if(pa>pb)
  {
    printf("Conteudo do maior endereco: %d",*pa);
  }
  else
  {
    printf("Conteudo do maior endereco: %d",*pb);
  }
  return 0;
}
