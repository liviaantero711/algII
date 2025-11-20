#include<stdio.h>

int perfeito(int n)
{
  int i,soma;
  soma=0;
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      soma=soma+i;
    }
  }
  if(soma==n)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int n,r;
  printf("Digite um valor: ");
  scanf("%d",&n);
  r=perfeito(n);
  if(r==1)
  {
    printf("Numero perfeito");
  }
  else
  {
    printf("Numero nao perfeito");
  }
  return 0;
}
