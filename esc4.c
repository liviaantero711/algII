#include<stdio.h>
#include<math.h>

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
  float largura,altura,area,diag,perimetro;
  printf("Digite X do ponto superior esquerdo: ");
  scanf("%f",&r.sup.x);
  printf("Digite Y do ponto superior esquerdo: ");
  scanf("%f",&r.sup.y);
  printf("Digite X do ponto inferior direito: ");
  scanf("%f",&r.inf.x);
  printf("Digite Y do ponto inferior direito: ");
  scanf("%f",&r.inf.y);
  largura=r.inf.x-r.sup.x;
  altura=r.sup.y-r.inf.y;
  area=largura*altura;
  diag=sqrt(largura*largura+altura*altura);
  perimetro=2*(largura+altura);
  printf("Area: %.2f",area);
  printf(" Diagonal: %.2f",diag);
  printf(" Perimetro: %.2f",perimetro);
  return 0;
}
