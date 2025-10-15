#include<stdio.h>
#include<stdio.h>
/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/
struct p
{
  int px, py;
  int p1, p2;
};
int main()
{
  struct p po;
  float r;
  printf("coloque os pontos x e y:");
  scanf("%d %d",&po.px, &po.py);
  printf("coloque dois pontos aleatorios:");
  scanf("%d %d, &po.p1, &po.p2);
  r = sqrt(pow(po.px - po.p1,2) + pow(po.py - po.p2, 2));
  printf("a distancia entre eles é:%.2f");
  return(0);
}
