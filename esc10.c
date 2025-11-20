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
  struct Atleta a[5],aux;
  int i,j;
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
  }
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(a[j].idade>a[i].idade)
      {
        aux=a[i];
        a[i]=a[j];
        a[j]=aux;
      }
    }
  }
  for(i=0;i<5;i++)
  {
    printf("%s %d\n",a[i].nome,a[i].idade);
  }
  return 0;
}

