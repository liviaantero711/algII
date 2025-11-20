#include<stdio.h>

struct Atleta
{
  char nome[50];
  char esporte[50];
  int idade;
  float altura;
};

int main()
{
  struct Atleta a[5];
  int i,posVelho,posAlto;
  posVelho=0;
  posAlto=0;
  for(i=0;i<5;i++)
  {
    printf("Digite nome: ");
    scanf("%s",a[i].nome);
    printf("Digite esporte: ");
    scanf("%s",a[i].esporte);
    printf("Digite idade: ");
    scanf("%d",&a[i].idade);
    printf("Digite altura: ");
    scanf("%f",&a[i].altura);
    if(a[i].idade>a[posVelho].idade)
    {
      posVelho=i;
    }
    if(a[i].altura>a[posAlto].altura)
    {
      posAlto=i;
    }
  }
  printf("Atleta mais velho: %s",a[posVelho].nome);
  printf(" Atleta mais alto: %s",a[posAlto].nome);
  return 0;
}

