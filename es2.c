#include<stdio.h>
#include<math.h>
/*rie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem
d as coordenadas, isto é, a posição (0,0).*/
struct c
{
  int posicaox;
  int posicaoy;
};

int main()
{
  struct c c1;
  float r;
  printf("digite o valor de x e y");
  scanf("%d %d", &c1.posicaox, &c1.posicaoy);
  r = sqrt(pow(c1.posicaox,2) + pow(c1.posicaoy,2));
  printf("resultado:%f", r);
  return(0);
}
