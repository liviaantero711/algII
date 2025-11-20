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
    printf("Maior endereco: %p",pa);
  }
  else
  {
    printf("Maior endereco: %p",pb);
  }
  return 0;
}
