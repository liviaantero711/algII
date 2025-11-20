#include<stdio.h>

struct Ponto
{
  float x,y;
};

struct Retangulo
{
  struct Ponto sup;
  struct Ponto inf;
};

int main()
{
  struct Retangulo r;
  struct Ponto p;
  printf("Digite X do ponto superior esquerdo: ");
  scanf("%f",&r.sup.x);
  printf("Digite Y do ponto superior esquerdo: ");
  scanf("%f",&r.sup.y);
  printf("Digite X do ponto inferior direito: ");
  scanf("%f",&r.inf.x);
  printf("Digite Y do ponto inferior direito: ");
  scanf("%f",&r.inf.y);
  printf("Digite X do ponto a verificar: ");
  scanf("%f",&p.x);
  printf("Digite Y do ponto a verificar: ");
  scanf("%f",&p.y);
  if(p.x>=r.sup.x && p.x<=r.inf.x && p.y<=r.sup.y && p.y>=r.inf.y)
  {
    printf("Ponto dentro do retangulo");
  }
  else
  {
    printf("Ponto fora do retangulo");
  }
  return 0;
}
