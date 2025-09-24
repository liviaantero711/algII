#include<stdio.h>
#include<string.h>
/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

struct endereco;
{
  char rua[50];
  int casa;
  char bairro[50];
}

struct p;
{
  char nome[50];
  int idade;
  struct endereco e;
}
int main()
{
  struct p pe;
  char a = "s";
  char c = "n";
  char d;
  do
  {
  printf("insira o nome:");
  scanf("%s",&pe.nome[50]);
  printf("\ninsira a idade:");
  scanf("%d",&pe.idade);
  printf("\n     insira o endereço:");
  printf("\ninsira a rua:");
  scanf("%s",&pe.e.rua[50]);
  printf("\ninsira a o numero da casa:");
  scanf("%d",&pe.e.casa);
  printf("\ninsira o bairro:");
  scanf("%s",&pe.e.bairro[50]);
  printf("\n     suas informações:    ");
  printf("\nnome:%s", pe.nome[50]);
  printf("\nidade:%d", pe.idade);
  printf("\nendereço:");
  printf("\nrua:%s",pe.e.rua[50]);
  printf("\ncasa:%d",pe.e.casa);
  printf("\nbairro:%s",pe.e.bairro[50]);
  printf("\nas informações estão corretas?\n~s\n~n");
  scanf("%s",&d);
  }
  while(d = a)
  if(d = a)
  {
   printf("\nღღsuas informações foram armazenadasღღ");
  }

  return(0);
}
