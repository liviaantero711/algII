#include<stdio.h>

struct Aluno
{
  int matricula;
  char nome[50];
  float n1,n2,n3;
};

int main()
{
  struct Aluno a[5];
  int i,pos;
  float media,maior;
  maior=0;
  pos=0;
  for(i=0;i<5;i++)
  {
    printf("Digite matricula: ");
    scanf("%d",&a[i].matricula);
    printf("Digite nome: ");
    scanf("%s",a[i].nome);
    printf("Digite nota 1: ");
    scanf("%f",&a[i].n1);
    printf("Digite nota 2: ");
    scanf("%f",&a[i].n2);
    printf("Digite nota 3: ");
    scanf("%f",&a[i].n3);
    media=(a[i].n1+a[i].n2+a[i].n3)/3;
    if(media>maior)
    {
      maior=media;
      pos=i;
    }
  }
  printf("Aluno com maior media: %s",a[pos].nome);
  printf(" Notas: %.2f %.2f %.2f",a[pos].n1,a[pos].n2,a[pos].n3);
  return 0;
}
