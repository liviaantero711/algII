#include<stdio.h>

struct Pessoa
{
  char nome[50];
  int d,m,a;
};

int main()
{
  struct Pessoa p[6];
  int i,posVelha,posNova;
  posVelha=0;
  posNova=0;
  for(i=0;i<6;i++)
  {
    printf("Digite nome: ");
    scanf("%s",p[i].nome);
    printf("Digite dia de nascimento: ");
    scanf("%d",&p[i].d);
    printf("Digite mes de nascimento: ");
    scanf("%d",&p[i].m);
    printf("Digite ano de nascimento: ");
    scanf("%d",&p[i].a);
    if(
      p[i].a<p[posVelha].a ||
      (p[i].a==p[posVelha].a && p[i].m<p[posVelha].m) ||
      (p[i].a==p[posVelha].a && p[i].m==p[posVelha].m && p[i].d<p[posVelha].d)
    )
    {
      posVelha=i;
    }
    if(
      p[i].a>p[posNova].a ||
      (p[i].a==p[posNova].a && p[i].m>p[posNova].m) ||
      (p[i].a==p[posNova].a && p[i].m==p[posNova].m && p[i].d>p[posNova].d)
    )
    {
      posNova=i;
    }
  }
  printf("Pessoa mais velha: %s",p[posVelha].nome);
  printf(" Pessoa mais nova: %s",p[posNova].nome);
  return 0;
}

