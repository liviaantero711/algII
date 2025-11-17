#include<stdio.h>
// Procedimento que recebe 3 valores inteiros e imprime em ordem crescente
// Feito sem tabs, com duas quebras de linha e tudo em uma função apenas

#include<stdio.h>

void ordenar(int r)
{
   int a, b, c;
   printf("insira o primeiro valor: ");
   scanf("%d",&a);
   printf("insira o segundo valor: ");
   scanf("%d",&b);
   printf("insira o terceiro valor: ");
   scanf("%d",&c);
   if(a>b)
{
     temp=a;
     a=b;
     b=temp;
}
   if(a>c)
{
    temp=a;
    a=c;
    c=temp;
}
  if(b>c)
{
    temp=b;
    b=c;
    c=temp;
}
  printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);
}

int main()
{
  ordenar();

  return(0);
}

