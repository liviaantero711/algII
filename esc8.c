#include<stdio.h>

void categoria(int idade,char *r)
{
  if(idade>=5 && idade<=7)
  {
    r="Infantil A";
  }
  else if(idade>=8 && idade<=10)
  {
    r="Infantil B";
  }
  else if(idade>=11 && idade<=13)
  {
    r="Juvenil A";
  }
  else if(idade>=14 && idade<=17)
  {
    r="Juvenil B";
  }
  else
  {
    r="Adulto";
  }
  printf("Categoria: %s",r);
}

int main()
{
  int idade;
  char *r;
  printf("Digite a idade: ");
  scanf("%d",&idade);
  categoria(idade,r);
  return 0;
}
